#include "CAD.h"

namespace Composants {
	CAD::CAD(void) {
		this->_requestSql = "";
		this->_connectionString = "Data Source=.;Initial Catalog=gestionSoftware;Integrated Security=True";
		this->_sqlConnection = gcnew SqlConnection(this->_connectionString);
		this->_sqlCommand = gcnew SqlCommand(this->_requestSql, this->_sqlConnection);
		this->_sqlCommand->CommandType = CommandType::Text;
	}

	DataSet^ CAD::getRows(System::String^ requestSql, String^ dataTableName) {
		this->setSql(requestSql);
		this->_sqlDataAdapter = gcnew SqlDataAdapter(this->_sqlCommand);
		this->_sqlCommand->CommandText = this->_requestSql;
		this->_dataSet = gcnew DataSet();
		this->_sqlDataAdapter->Fill(this->_dataSet, dataTableName);
		return this->_dataSet;
	}

	void CAD::actionRows(String^ requestSql) {
		this->setSql(requestSql);
		this->_sqlCommand->CommandText = this->_requestSql;
		this->_sqlConnection->Open();
		this->_sqlCommand->ExecuteNonQuery();
		this->_sqlConnection->Close();
	}

	int CAD::actionRowsID(String^ requestSql) {
		int id;
		this->setSql(requestSql);
		this->_sqlCommand->CommandText = this->_requestSql;
		this->_sqlConnection->Open();
		id = Convert::ToInt32(this->_sqlCommand->ExecuteScalar());
		this->_sqlConnection->Close();
		return id;
	}

	void CAD::setSql(String^ requestSql) {
		this->_requestSql = requestSql;
	}
}