// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_OPENSEARCH20171225_H_
#define ALIBABACLOUD_OPENSEARCH20171225_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_OpenSearch20171225 {
class ABTestExperiment : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<bool> online{};
  shared_ptr<map<string, string>> params{};
  shared_ptr<long> serialNumber{};
  shared_ptr<long> traffic{};

  ABTestExperiment() {}

  explicit ABTestExperiment(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (online) {
      res["online"] = boost::any(*online);
    }
    if (params) {
      res["params"] = boost::any(*params);
    }
    if (serialNumber) {
      res["serialNumber"] = boost::any(*serialNumber);
    }
    if (traffic) {
      res["traffic"] = boost::any(*traffic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("online") != m.end() && !m["online"].empty()) {
      online = make_shared<bool>(boost::any_cast<bool>(m["online"]));
    }
    if (m.find("params") != m.end() && !m["params"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["params"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      params = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("serialNumber") != m.end() && !m["serialNumber"].empty()) {
      serialNumber = make_shared<long>(boost::any_cast<long>(m["serialNumber"]));
    }
    if (m.find("traffic") != m.end() && !m["traffic"].empty()) {
      traffic = make_shared<long>(boost::any_cast<long>(m["traffic"]));
    }
  }


  virtual ~ABTestExperiment() = default;
};
class ABTestGroup : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> status{};

  ABTestGroup() {}

  explicit ABTestGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
  }


  virtual ~ABTestGroup() = default;
};
class ABTestScene : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> status{};
  shared_ptr<vector<string>> values{};

  ABTestScene() {}

  explicit ABTestScene(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (values) {
      res["values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("values") != m.end() && !m["values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ABTestScene() = default;
};
class AppCluster : public Darabonba::Model {
public:
  shared_ptr<long> maxQueryClauseLength{};
  shared_ptr<long> maxTimeoutMS{};

  AppCluster() {}

  explicit AppCluster(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxQueryClauseLength) {
      res["maxQueryClauseLength"] = boost::any(*maxQueryClauseLength);
    }
    if (maxTimeoutMS) {
      res["maxTimeoutMS"] = boost::any(*maxTimeoutMS);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxQueryClauseLength") != m.end() && !m["maxQueryClauseLength"].empty()) {
      maxQueryClauseLength = make_shared<long>(boost::any_cast<long>(m["maxQueryClauseLength"]));
    }
    if (m.find("maxTimeoutMS") != m.end() && !m["maxTimeoutMS"].empty()) {
      maxTimeoutMS = make_shared<long>(boost::any_cast<long>(m["maxTimeoutMS"]));
    }
  }


  virtual ~AppCluster() = default;
};
class DataSourcePluginsValue : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> fromFields{};
  shared_ptr<map<string, string>> parameters{};

  DataSourcePluginsValue() {}

  explicit DataSourcePluginsValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (fromFields) {
      res["fromFields"] = boost::any(*fromFields);
    }
    if (parameters) {
      res["parameters"] = boost::any(*parameters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("fromFields") != m.end() && !m["fromFields"].empty()) {
      fromFields = make_shared<string>(boost::any_cast<string>(m["fromFields"]));
    }
    if (m.find("parameters") != m.end() && !m["parameters"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["parameters"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameters = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~DataSourcePluginsValue() = default;
};
class DataSource : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, string>>> fields{};
  shared_ptr<string> keyField{};
  shared_ptr<map<string, boost::any>> parameters{};
  shared_ptr<map<string, DataSourcePluginsValue>> plugins{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> tableName{};
  shared_ptr<string> type{};

  DataSource() {}

  explicit DataSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fields) {
      res["fields"] = boost::any(*fields);
    }
    if (keyField) {
      res["keyField"] = boost::any(*keyField);
    }
    if (parameters) {
      res["parameters"] = boost::any(*parameters);
    }
    if (plugins) {
      map<string, boost::any> temp1;
      for(auto item1:*plugins){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["plugins"] = boost::any(temp1);
    }
    if (schemaName) {
      res["schemaName"] = boost::any(*schemaName);
    }
    if (tableName) {
      res["tableName"] = boost::any(*tableName);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fields") != m.end() && !m["fields"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["fields"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["fields"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      fields = make_shared<vector<map<string, string>>>(toVec1);
    }
    if (m.find("keyField") != m.end() && !m["keyField"].empty()) {
      keyField = make_shared<string>(boost::any_cast<string>(m["keyField"]));
    }
    if (m.find("parameters") != m.end() && !m["parameters"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["parameters"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameters = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("plugins") != m.end() && !m["plugins"].empty()) {
      if (typeid(map<string, boost::any>) == m["plugins"].type()) {
        map<string, DataSourcePluginsValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["plugins"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            DataSourcePluginsValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        plugins = make_shared<map<string, DataSourcePluginsValue>>(expect1);
      }
    }
    if (m.find("schemaName") != m.end() && !m["schemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["schemaName"]));
    }
    if (m.find("tableName") != m.end() && !m["tableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["tableName"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~DataSource() = default;
};
class Domain : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<map<string, vector<string>>> functions{};
  shared_ptr<string> name{};

  Domain() {}

  explicit Domain(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (functions) {
      res["functions"] = boost::any(*functions);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("functions") != m.end() && !m["functions"].empty()) {
      map<string, vector<string>> map1 = boost::any_cast<map<string, vector<string>>>(m["functions"]);
      map<string, vector<string>> toMap1;
      for (auto item:map1) {
        vector<string> toVec2;
        if (typeid(vector<boost::any>) == item.second.type()) {
          vector<boost::any> vec2 = boost::any_cast<vector<boost::any>>(item.second);
          for (auto item:vec2) {
             toVec2.push_back(boost::any_cast<string>(item));
          }
        }
         toMap1[item.first] = toVec2;
      }
      functions = make_shared<map<string, vector<string>>>(toMap1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~Domain() = default;
};
class FirstRank : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<string> description{};
  shared_ptr<boost::any> meta{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  FirstRank() {}

  explicit FirstRank(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["active"] = boost::any(*active);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (meta) {
      res["meta"] = boost::any(*meta);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("active") != m.end() && !m["active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["active"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("meta") != m.end() && !m["meta"].empty()) {
      meta = make_shared<boost::any>(boost::any_cast<boost::any>(m["meta"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~FirstRank() = default;
};
class QueryProcessor : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<string> category{};
  shared_ptr<string> domain{};
  shared_ptr<vector<string>> indexes{};
  shared_ptr<string> name{};
  shared_ptr<vector<map<string, boost::any>>> processors{};

  QueryProcessor() {}

  explicit QueryProcessor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["active"] = boost::any(*active);
    }
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    if (indexes) {
      res["indexes"] = boost::any(*indexes);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (processors) {
      res["processors"] = boost::any(*processors);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("active") != m.end() && !m["active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["active"]));
    }
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
    if (m.find("indexes") != m.end() && !m["indexes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["indexes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["indexes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      indexes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("processors") != m.end() && !m["processors"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["processors"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["processors"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      processors = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
  }


  virtual ~QueryProcessor() = default;
};
class Quota : public Darabonba::Model {
public:
  shared_ptr<long> computeResource{};
  shared_ptr<long> docSize{};
  shared_ptr<string> orderType{};
  shared_ptr<string> spec{};

  Quota() {}

  explicit Quota(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (computeResource) {
      res["computeResource"] = boost::any(*computeResource);
    }
    if (docSize) {
      res["docSize"] = boost::any(*docSize);
    }
    if (orderType) {
      res["orderType"] = boost::any(*orderType);
    }
    if (spec) {
      res["spec"] = boost::any(*spec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("computeResource") != m.end() && !m["computeResource"].empty()) {
      computeResource = make_shared<long>(boost::any_cast<long>(m["computeResource"]));
    }
    if (m.find("docSize") != m.end() && !m["docSize"].empty()) {
      docSize = make_shared<long>(boost::any_cast<long>(m["docSize"]));
    }
    if (m.find("orderType") != m.end() && !m["orderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["orderType"]));
    }
    if (m.find("spec") != m.end() && !m["spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["spec"]));
    }
  }


  virtual ~Quota() = default;
};
class SchemaTablesValueFieldsValue : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<bool> primaryKey{};
  shared_ptr<string> type{};
  shared_ptr<vector<string>> joinWith{};
  shared_ptr<string> label{};

  SchemaTablesValueFieldsValue() {}

  explicit SchemaTablesValueFieldsValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (primaryKey) {
      res["primaryKey"] = boost::any(*primaryKey);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (joinWith) {
      res["joinWith"] = boost::any(*joinWith);
    }
    if (label) {
      res["label"] = boost::any(*label);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("primaryKey") != m.end() && !m["primaryKey"].empty()) {
      primaryKey = make_shared<bool>(boost::any_cast<bool>(m["primaryKey"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("joinWith") != m.end() && !m["joinWith"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["joinWith"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["joinWith"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      joinWith = make_shared<vector<string>>(toVec1);
    }
    if (m.find("label") != m.end() && !m["label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["label"]));
    }
  }


  virtual ~SchemaTablesValueFieldsValue() = default;
};
class SchemaTablesValue : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<bool> primaryTable{};
  shared_ptr<map<string, SchemaTablesValueFieldsValue>> fields{};

  SchemaTablesValue() {}

  explicit SchemaTablesValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (primaryTable) {
      res["primaryTable"] = boost::any(*primaryTable);
    }
    if (fields) {
      map<string, boost::any> temp1;
      for(auto item1:*fields){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["fields"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("primaryTable") != m.end() && !m["primaryTable"].empty()) {
      primaryTable = make_shared<bool>(boost::any_cast<bool>(m["primaryTable"]));
    }
    if (m.find("fields") != m.end() && !m["fields"].empty()) {
      if (typeid(map<string, boost::any>) == m["fields"].type()) {
        map<string, SchemaTablesValueFieldsValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["fields"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            SchemaTablesValueFieldsValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        fields = make_shared<map<string, SchemaTablesValueFieldsValue>>(expect1);
      }
    }
  }


  virtual ~SchemaTablesValue() = default;
};
class SchemaIndexSortConfig : public Darabonba::Model {
public:
  shared_ptr<string> direction{};
  shared_ptr<string> field{};

  SchemaIndexSortConfig() {}

  explicit SchemaIndexSortConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (direction) {
      res["direction"] = boost::any(*direction);
    }
    if (field) {
      res["field"] = boost::any(*field);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("direction") != m.end() && !m["direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["direction"]));
    }
    if (m.find("field") != m.end() && !m["field"].empty()) {
      field = make_shared<string>(boost::any_cast<string>(m["field"]));
    }
  }


  virtual ~SchemaIndexSortConfig() = default;
};
class SchemaIndexesSearchFieldsValue : public Darabonba::Model {
public:
  shared_ptr<string> analyzer{};
  shared_ptr<string> analyzerType{};
  shared_ptr<string> analyzerGeneration{};
  shared_ptr<vector<string>> fields{};
  shared_ptr<string> label{};

  SchemaIndexesSearchFieldsValue() {}

  explicit SchemaIndexesSearchFieldsValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (analyzer) {
      res["analyzer"] = boost::any(*analyzer);
    }
    if (analyzerType) {
      res["analyzerType"] = boost::any(*analyzerType);
    }
    if (analyzerGeneration) {
      res["analyzerGeneration"] = boost::any(*analyzerGeneration);
    }
    if (fields) {
      res["fields"] = boost::any(*fields);
    }
    if (label) {
      res["label"] = boost::any(*label);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("analyzer") != m.end() && !m["analyzer"].empty()) {
      analyzer = make_shared<string>(boost::any_cast<string>(m["analyzer"]));
    }
    if (m.find("analyzerType") != m.end() && !m["analyzerType"].empty()) {
      analyzerType = make_shared<string>(boost::any_cast<string>(m["analyzerType"]));
    }
    if (m.find("analyzerGeneration") != m.end() && !m["analyzerGeneration"].empty()) {
      analyzerGeneration = make_shared<string>(boost::any_cast<string>(m["analyzerGeneration"]));
    }
    if (m.find("fields") != m.end() && !m["fields"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["fields"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["fields"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fields = make_shared<vector<string>>(toVec1);
    }
    if (m.find("label") != m.end() && !m["label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["label"]));
    }
  }


  virtual ~SchemaIndexesSearchFieldsValue() = default;
};
class SchemaIndexes : public Darabonba::Model {
public:
  shared_ptr<vector<string>> filterFields{};
  shared_ptr<map<string, SchemaIndexesSearchFieldsValue>> searchFields{};

  SchemaIndexes() {}

  explicit SchemaIndexes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filterFields) {
      res["filterFields"] = boost::any(*filterFields);
    }
    if (searchFields) {
      map<string, boost::any> temp1;
      for(auto item1:*searchFields){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["searchFields"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("filterFields") != m.end() && !m["filterFields"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["filterFields"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["filterFields"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      filterFields = make_shared<vector<string>>(toVec1);
    }
    if (m.find("searchFields") != m.end() && !m["searchFields"].empty()) {
      if (typeid(map<string, boost::any>) == m["searchFields"].type()) {
        map<string, SchemaIndexesSearchFieldsValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["searchFields"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            SchemaIndexesSearchFieldsValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        searchFields = make_shared<map<string, SchemaIndexesSearchFieldsValue>>(expect1);
      }
    }
  }


  virtual ~SchemaIndexes() = default;
};
class SchemaTtlField : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> ttl{};

  SchemaTtlField() {}

  explicit SchemaTtlField(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (ttl) {
      res["ttl"] = boost::any(*ttl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("ttl") != m.end() && !m["ttl"].empty()) {
      ttl = make_shared<long>(boost::any_cast<long>(m["ttl"]));
    }
  }


  virtual ~SchemaTtlField() = default;
};
class Schema : public Darabonba::Model {
public:
  shared_ptr<vector<SchemaIndexSortConfig>> indexSortConfig{};
  shared_ptr<SchemaIndexes> indexes{};
  shared_ptr<string> name{};
  shared_ptr<string> routeField{};
  shared_ptr<vector<string>> routeFieldValues{};
  shared_ptr<string> secondRouteField{};
  shared_ptr<map<string, SchemaTablesValue>> tables{};
  shared_ptr<SchemaTtlField> ttlField{};

  Schema() {}

  explicit Schema(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (indexSortConfig) {
      vector<boost::any> temp1;
      for(auto item1:*indexSortConfig){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["indexSortConfig"] = boost::any(temp1);
    }
    if (indexes) {
      res["indexes"] = indexes ? boost::any(indexes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (routeField) {
      res["routeField"] = boost::any(*routeField);
    }
    if (routeFieldValues) {
      res["routeFieldValues"] = boost::any(*routeFieldValues);
    }
    if (secondRouteField) {
      res["secondRouteField"] = boost::any(*secondRouteField);
    }
    if (tables) {
      map<string, boost::any> temp1;
      for(auto item1:*tables){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["tables"] = boost::any(temp1);
    }
    if (ttlField) {
      res["ttlField"] = ttlField ? boost::any(ttlField->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("indexSortConfig") != m.end() && !m["indexSortConfig"].empty()) {
      if (typeid(vector<boost::any>) == m["indexSortConfig"].type()) {
        vector<SchemaIndexSortConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["indexSortConfig"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SchemaIndexSortConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        indexSortConfig = make_shared<vector<SchemaIndexSortConfig>>(expect1);
      }
    }
    if (m.find("indexes") != m.end() && !m["indexes"].empty()) {
      if (typeid(map<string, boost::any>) == m["indexes"].type()) {
        SchemaIndexes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["indexes"]));
        indexes = make_shared<SchemaIndexes>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("routeField") != m.end() && !m["routeField"].empty()) {
      routeField = make_shared<string>(boost::any_cast<string>(m["routeField"]));
    }
    if (m.find("routeFieldValues") != m.end() && !m["routeFieldValues"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["routeFieldValues"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["routeFieldValues"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      routeFieldValues = make_shared<vector<string>>(toVec1);
    }
    if (m.find("secondRouteField") != m.end() && !m["secondRouteField"].empty()) {
      secondRouteField = make_shared<string>(boost::any_cast<string>(m["secondRouteField"]));
    }
    if (m.find("tables") != m.end() && !m["tables"].empty()) {
      if (typeid(map<string, boost::any>) == m["tables"].type()) {
        map<string, SchemaTablesValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["tables"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            SchemaTablesValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        tables = make_shared<map<string, SchemaTablesValue>>(expect1);
      }
    }
    if (m.find("ttlField") != m.end() && !m["ttlField"].empty()) {
      if (typeid(map<string, boost::any>) == m["ttlField"].type()) {
        SchemaTtlField model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ttlField"]));
        ttlField = make_shared<SchemaTtlField>(model1);
      }
    }
  }


  virtual ~Schema() = default;
};
class SecondRank : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<string> description{};
  shared_ptr<boost::any> meta{};
  shared_ptr<string> name{};

  SecondRank() {}

  explicit SecondRank(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["active"] = boost::any(*active);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (meta) {
      res["meta"] = boost::any(*meta);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("active") != m.end() && !m["active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["active"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("meta") != m.end() && !m["meta"].empty()) {
      meta = make_shared<boost::any>(boost::any_cast<boost::any>(m["meta"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~SecondRank() = default;
};
class SummaryMeta : public Darabonba::Model {
public:
  shared_ptr<string> element{};
  shared_ptr<string> ellipsis{};
  shared_ptr<string> field{};
  shared_ptr<long> len{};
  shared_ptr<string> snippet{};

  SummaryMeta() {}

  explicit SummaryMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (element) {
      res["element"] = boost::any(*element);
    }
    if (ellipsis) {
      res["ellipsis"] = boost::any(*ellipsis);
    }
    if (field) {
      res["field"] = boost::any(*field);
    }
    if (len) {
      res["len"] = boost::any(*len);
    }
    if (snippet) {
      res["snippet"] = boost::any(*snippet);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("element") != m.end() && !m["element"].empty()) {
      element = make_shared<string>(boost::any_cast<string>(m["element"]));
    }
    if (m.find("ellipsis") != m.end() && !m["ellipsis"].empty()) {
      ellipsis = make_shared<string>(boost::any_cast<string>(m["ellipsis"]));
    }
    if (m.find("field") != m.end() && !m["field"].empty()) {
      field = make_shared<string>(boost::any_cast<string>(m["field"]));
    }
    if (m.find("len") != m.end() && !m["len"].empty()) {
      len = make_shared<long>(boost::any_cast<long>(m["len"]));
    }
    if (m.find("snippet") != m.end() && !m["snippet"].empty()) {
      snippet = make_shared<string>(boost::any_cast<string>(m["snippet"]));
    }
  }


  virtual ~SummaryMeta() = default;
};
class Summary : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<SummaryMeta> meta{};
  shared_ptr<string> name{};

  Summary() {}

  explicit Summary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["active"] = boost::any(*active);
    }
    if (meta) {
      res["meta"] = meta ? boost::any(meta->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("active") != m.end() && !m["active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["active"]));
    }
    if (m.find("meta") != m.end() && !m["meta"].empty()) {
      if (typeid(map<string, boost::any>) == m["meta"].type()) {
        SummaryMeta model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["meta"]));
        meta = make_shared<SummaryMeta>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~Summary() = default;
};
class App : public Darabonba::Model {
public:
  shared_ptr<bool> autoSwitch{};
  shared_ptr<AppCluster> cluster{};
  shared_ptr<vector<DataSource>> dataSources{};
  shared_ptr<string> description{};
  shared_ptr<Domain> domain{};
  shared_ptr<vector<string>> fetchFields{};
  shared_ptr<vector<FirstRank>> firstRanks{};
  shared_ptr<string> networkType{};
  shared_ptr<vector<QueryProcessor>> queryProcessors{};
  shared_ptr<Quota> quota{};
  shared_ptr<bool> realtimeShared{};
  shared_ptr<Schema> schema{};
  shared_ptr<vector<Schema>> schemas{};
  shared_ptr<vector<SecondRank>> secondRanks{};
  shared_ptr<vector<Summary>> summaries{};
  shared_ptr<string> type{};

  App() {}

  explicit App(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoSwitch) {
      res["autoSwitch"] = boost::any(*autoSwitch);
    }
    if (cluster) {
      res["cluster"] = cluster ? boost::any(cluster->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataSources) {
      vector<boost::any> temp1;
      for(auto item1:*dataSources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["dataSources"] = boost::any(temp1);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (domain) {
      res["domain"] = domain ? boost::any(domain->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fetchFields) {
      res["fetchFields"] = boost::any(*fetchFields);
    }
    if (firstRanks) {
      vector<boost::any> temp1;
      for(auto item1:*firstRanks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["firstRanks"] = boost::any(temp1);
    }
    if (networkType) {
      res["networkType"] = boost::any(*networkType);
    }
    if (queryProcessors) {
      vector<boost::any> temp1;
      for(auto item1:*queryProcessors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["queryProcessors"] = boost::any(temp1);
    }
    if (quota) {
      res["quota"] = quota ? boost::any(quota->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (realtimeShared) {
      res["realtimeShared"] = boost::any(*realtimeShared);
    }
    if (schema) {
      res["schema"] = schema ? boost::any(schema->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (schemas) {
      vector<boost::any> temp1;
      for(auto item1:*schemas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["schemas"] = boost::any(temp1);
    }
    if (secondRanks) {
      vector<boost::any> temp1;
      for(auto item1:*secondRanks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["secondRanks"] = boost::any(temp1);
    }
    if (summaries) {
      vector<boost::any> temp1;
      for(auto item1:*summaries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["summaries"] = boost::any(temp1);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoSwitch") != m.end() && !m["autoSwitch"].empty()) {
      autoSwitch = make_shared<bool>(boost::any_cast<bool>(m["autoSwitch"]));
    }
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      if (typeid(map<string, boost::any>) == m["cluster"].type()) {
        AppCluster model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["cluster"]));
        cluster = make_shared<AppCluster>(model1);
      }
    }
    if (m.find("dataSources") != m.end() && !m["dataSources"].empty()) {
      if (typeid(vector<boost::any>) == m["dataSources"].type()) {
        vector<DataSource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["dataSources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DataSource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataSources = make_shared<vector<DataSource>>(expect1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      if (typeid(map<string, boost::any>) == m["domain"].type()) {
        Domain model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["domain"]));
        domain = make_shared<Domain>(model1);
      }
    }
    if (m.find("fetchFields") != m.end() && !m["fetchFields"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["fetchFields"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["fetchFields"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fetchFields = make_shared<vector<string>>(toVec1);
    }
    if (m.find("firstRanks") != m.end() && !m["firstRanks"].empty()) {
      if (typeid(vector<boost::any>) == m["firstRanks"].type()) {
        vector<FirstRank> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["firstRanks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FirstRank model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        firstRanks = make_shared<vector<FirstRank>>(expect1);
      }
    }
    if (m.find("networkType") != m.end() && !m["networkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["networkType"]));
    }
    if (m.find("queryProcessors") != m.end() && !m["queryProcessors"].empty()) {
      if (typeid(vector<boost::any>) == m["queryProcessors"].type()) {
        vector<QueryProcessor> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["queryProcessors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryProcessor model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        queryProcessors = make_shared<vector<QueryProcessor>>(expect1);
      }
    }
    if (m.find("quota") != m.end() && !m["quota"].empty()) {
      if (typeid(map<string, boost::any>) == m["quota"].type()) {
        Quota model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["quota"]));
        quota = make_shared<Quota>(model1);
      }
    }
    if (m.find("realtimeShared") != m.end() && !m["realtimeShared"].empty()) {
      realtimeShared = make_shared<bool>(boost::any_cast<bool>(m["realtimeShared"]));
    }
    if (m.find("schema") != m.end() && !m["schema"].empty()) {
      if (typeid(map<string, boost::any>) == m["schema"].type()) {
        Schema model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["schema"]));
        schema = make_shared<Schema>(model1);
      }
    }
    if (m.find("schemas") != m.end() && !m["schemas"].empty()) {
      if (typeid(vector<boost::any>) == m["schemas"].type()) {
        vector<Schema> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["schemas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Schema model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        schemas = make_shared<vector<Schema>>(expect1);
      }
    }
    if (m.find("secondRanks") != m.end() && !m["secondRanks"].empty()) {
      if (typeid(vector<boost::any>) == m["secondRanks"].type()) {
        vector<SecondRank> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["secondRanks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SecondRank model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        secondRanks = make_shared<vector<SecondRank>>(expect1);
      }
    }
    if (m.find("summaries") != m.end() && !m["summaries"].empty()) {
      if (typeid(vector<boost::any>) == m["summaries"].type()) {
        vector<Summary> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["summaries"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Summary model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        summaries = make_shared<vector<Summary>>(expect1);
      }
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~App() = default;
};
class AppGroup : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<string> chargingWay{};
  shared_ptr<string> description{};
  shared_ptr<string> domain{};
  shared_ptr<string> name{};
  shared_ptr<Quota> quota{};
  shared_ptr<string> type{};

  AppGroup() {}

  explicit AppGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["chargeType"] = boost::any(*chargeType);
    }
    if (chargingWay) {
      res["chargingWay"] = boost::any(*chargingWay);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (quota) {
      res["quota"] = quota ? boost::any(quota->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chargeType") != m.end() && !m["chargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["chargeType"]));
    }
    if (m.find("chargingWay") != m.end() && !m["chargingWay"].empty()) {
      chargingWay = make_shared<string>(boost::any_cast<string>(m["chargingWay"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("quota") != m.end() && !m["quota"].empty()) {
      if (typeid(map<string, boost::any>) == m["quota"].type()) {
        Quota model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["quota"]));
        quota = make_shared<Quota>(model1);
      }
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~AppGroup() = default;
};
class PrepayOrderInfo : public Darabonba::Model {
public:
  shared_ptr<bool> autoRenew{};
  shared_ptr<long> duration{};
  shared_ptr<string> pricingCycle{};

  PrepayOrderInfo() {}

  explicit PrepayOrderInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenew) {
      res["autoRenew"] = boost::any(*autoRenew);
    }
    if (duration) {
      res["duration"] = boost::any(*duration);
    }
    if (pricingCycle) {
      res["pricingCycle"] = boost::any(*pricingCycle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoRenew") != m.end() && !m["autoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["autoRenew"]));
    }
    if (m.find("duration") != m.end() && !m["duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["duration"]));
    }
    if (m.find("pricingCycle") != m.end() && !m["pricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["pricingCycle"]));
    }
  }


  virtual ~PrepayOrderInfo() = default;
};
class ScheduledTaskFilter : public Darabonba::Model {
public:
  shared_ptr<long> days{};
  shared_ptr<string> expression{};
  shared_ptr<string> field{};
  shared_ptr<string> unit{};

  ScheduledTaskFilter() {}

  explicit ScheduledTaskFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (days) {
      res["days"] = boost::any(*days);
    }
    if (expression) {
      res["expression"] = boost::any(*expression);
    }
    if (field) {
      res["field"] = boost::any(*field);
    }
    if (unit) {
      res["unit"] = boost::any(*unit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("days") != m.end() && !m["days"].empty()) {
      days = make_shared<long>(boost::any_cast<long>(m["days"]));
    }
    if (m.find("expression") != m.end() && !m["expression"].empty()) {
      expression = make_shared<string>(boost::any_cast<string>(m["expression"]));
    }
    if (m.find("field") != m.end() && !m["field"].empty()) {
      field = make_shared<string>(boost::any_cast<string>(m["field"]));
    }
    if (m.find("unit") != m.end() && !m["unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["unit"]));
    }
  }


  virtual ~ScheduledTaskFilter() = default;
};
class ScheduledTask : public Darabonba::Model {
public:
  shared_ptr<bool> autoSwitch{};
  shared_ptr<string> cron{};
  shared_ptr<bool> enabled{};
  shared_ptr<ScheduledTaskFilter> filter{};
  shared_ptr<string> forkedAppId{};
  shared_ptr<bool> permanent{};
  shared_ptr<bool> runNow{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  ScheduledTask() {}

  explicit ScheduledTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoSwitch) {
      res["autoSwitch"] = boost::any(*autoSwitch);
    }
    if (cron) {
      res["cron"] = boost::any(*cron);
    }
    if (enabled) {
      res["enabled"] = boost::any(*enabled);
    }
    if (filter) {
      res["filter"] = filter ? boost::any(filter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (forkedAppId) {
      res["forkedAppId"] = boost::any(*forkedAppId);
    }
    if (permanent) {
      res["permanent"] = boost::any(*permanent);
    }
    if (runNow) {
      res["runNow"] = boost::any(*runNow);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoSwitch") != m.end() && !m["autoSwitch"].empty()) {
      autoSwitch = make_shared<bool>(boost::any_cast<bool>(m["autoSwitch"]));
    }
    if (m.find("cron") != m.end() && !m["cron"].empty()) {
      cron = make_shared<string>(boost::any_cast<string>(m["cron"]));
    }
    if (m.find("enabled") != m.end() && !m["enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["enabled"]));
    }
    if (m.find("filter") != m.end() && !m["filter"].empty()) {
      if (typeid(map<string, boost::any>) == m["filter"].type()) {
        ScheduledTaskFilter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["filter"]));
        filter = make_shared<ScheduledTaskFilter>(model1);
      }
    }
    if (m.find("forkedAppId") != m.end() && !m["forkedAppId"].empty()) {
      forkedAppId = make_shared<string>(boost::any_cast<string>(m["forkedAppId"]));
    }
    if (m.find("permanent") != m.end() && !m["permanent"].empty()) {
      permanent = make_shared<bool>(boost::any_cast<bool>(m["permanent"]));
    }
    if (m.find("runNow") != m.end() && !m["runNow"].empty()) {
      runNow = make_shared<bool>(boost::any_cast<bool>(m["runNow"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~ScheduledTask() = default;
};
class SearchStrategyMergeConfig : public Darabonba::Model {
public:
  shared_ptr<long> docCount{};
  shared_ptr<string> rankName{};

  SearchStrategyMergeConfig() {}

  explicit SearchStrategyMergeConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docCount) {
      res["docCount"] = boost::any(*docCount);
    }
    if (rankName) {
      res["rankName"] = boost::any(*rankName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("docCount") != m.end() && !m["docCount"].empty()) {
      docCount = make_shared<long>(boost::any_cast<long>(m["docCount"]));
    }
    if (m.find("rankName") != m.end() && !m["rankName"].empty()) {
      rankName = make_shared<string>(boost::any_cast<string>(m["rankName"]));
    }
  }


  virtual ~SearchStrategyMergeConfig() = default;
};
class SearchStrategySearchConfigs : public Darabonba::Model {
public:
  shared_ptr<string> firstRankName{};
  shared_ptr<long> mergeProportion{};
  shared_ptr<string> queryType{};
  shared_ptr<string> secondRankName{};

  SearchStrategySearchConfigs() {}

  explicit SearchStrategySearchConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (firstRankName) {
      res["firstRankName"] = boost::any(*firstRankName);
    }
    if (mergeProportion) {
      res["mergeProportion"] = boost::any(*mergeProportion);
    }
    if (queryType) {
      res["queryType"] = boost::any(*queryType);
    }
    if (secondRankName) {
      res["secondRankName"] = boost::any(*secondRankName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("firstRankName") != m.end() && !m["firstRankName"].empty()) {
      firstRankName = make_shared<string>(boost::any_cast<string>(m["firstRankName"]));
    }
    if (m.find("mergeProportion") != m.end() && !m["mergeProportion"].empty()) {
      mergeProportion = make_shared<long>(boost::any_cast<long>(m["mergeProportion"]));
    }
    if (m.find("queryType") != m.end() && !m["queryType"].empty()) {
      queryType = make_shared<string>(boost::any_cast<string>(m["queryType"]));
    }
    if (m.find("secondRankName") != m.end() && !m["secondRankName"].empty()) {
      secondRankName = make_shared<string>(boost::any_cast<string>(m["secondRankName"]));
    }
  }


  virtual ~SearchStrategySearchConfigs() = default;
};
class SearchStrategy : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<bool> isDefault{};
  shared_ptr<SearchStrategyMergeConfig> mergeConfig{};
  shared_ptr<string> name{};
  shared_ptr<vector<SearchStrategySearchConfigs>> searchConfigs{};

  SearchStrategy() {}

  explicit SearchStrategy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (isDefault) {
      res["isDefault"] = boost::any(*isDefault);
    }
    if (mergeConfig) {
      res["mergeConfig"] = mergeConfig ? boost::any(mergeConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (searchConfigs) {
      vector<boost::any> temp1;
      for(auto item1:*searchConfigs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["searchConfigs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("isDefault") != m.end() && !m["isDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["isDefault"]));
    }
    if (m.find("mergeConfig") != m.end() && !m["mergeConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["mergeConfig"].type()) {
        SearchStrategyMergeConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["mergeConfig"]));
        mergeConfig = make_shared<SearchStrategyMergeConfig>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("searchConfigs") != m.end() && !m["searchConfigs"].empty()) {
      if (typeid(vector<boost::any>) == m["searchConfigs"].type()) {
        vector<SearchStrategySearchConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["searchConfigs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchStrategySearchConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        searchConfigs = make_shared<vector<SearchStrategySearchConfigs>>(expect1);
      }
    }
  }


  virtual ~SearchStrategy() = default;
};
class BindESUserAnalyzerRequest : public Darabonba::Model {
public:
  shared_ptr<boost::any> body{};

  BindESUserAnalyzerRequest() {}

  explicit BindESUserAnalyzerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<boost::any>(boost::any_cast<boost::any>(m["body"]));
    }
  }


  virtual ~BindESUserAnalyzerRequest() = default;
};
class BindESUserAnalyzerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  BindESUserAnalyzerResponseBody() {}

  explicit BindESUserAnalyzerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~BindESUserAnalyzerResponseBody() = default;
};
class BindESUserAnalyzerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BindESUserAnalyzerResponseBody> body{};

  BindESUserAnalyzerResponse() {}

  explicit BindESUserAnalyzerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        BindESUserAnalyzerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindESUserAnalyzerResponseBody>(model1);
      }
    }
  }


  virtual ~BindESUserAnalyzerResponse() = default;
};
class BindEsInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> body{};

  BindEsInstanceRequest() {}

  explicit BindEsInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["body"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      body = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~BindEsInstanceRequest() = default;
};
class BindEsInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  BindEsInstanceResponseBody() {}

  explicit BindEsInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~BindEsInstanceResponseBody() = default;
};
class BindEsInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BindEsInstanceResponseBody> body{};

  BindEsInstanceResponse() {}

  explicit BindEsInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        BindEsInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindEsInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~BindEsInstanceResponse() = default;
};
class CompileSortScriptResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CompileSortScriptResponseBody() {}

  explicit CompileSortScriptResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CompileSortScriptResponseBody() = default;
};
class CompileSortScriptResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CompileSortScriptResponseBody> body{};

  CompileSortScriptResponse() {}

  explicit CompileSortScriptResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CompileSortScriptResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CompileSortScriptResponseBody>(model1);
      }
    }
  }


  virtual ~CompileSortScriptResponse() = default;
};
class CreateABTestExperimentRequest : public Darabonba::Model {
public:
  shared_ptr<ABTestExperiment> body{};
  shared_ptr<bool> dryRun{};

  CreateABTestExperimentRequest() {}

  explicit CreateABTestExperimentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dryRun) {
      res["dryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ABTestExperiment model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ABTestExperiment>(model1);
      }
    }
    if (m.find("dryRun") != m.end() && !m["dryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["dryRun"]));
    }
  }


  virtual ~CreateABTestExperimentRequest() = default;
};
class CreateABTestExperimentResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> created{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<bool> online{};
  shared_ptr<map<string, boost::any>> params{};
  shared_ptr<long> traffic{};
  shared_ptr<long> updated{};

  CreateABTestExperimentResponseBodyResult() {}

  explicit CreateABTestExperimentResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (online) {
      res["online"] = boost::any(*online);
    }
    if (params) {
      res["params"] = boost::any(*params);
    }
    if (traffic) {
      res["traffic"] = boost::any(*traffic);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<long>(boost::any_cast<long>(m["created"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("online") != m.end() && !m["online"].empty()) {
      online = make_shared<bool>(boost::any_cast<bool>(m["online"]));
    }
    if (m.find("params") != m.end() && !m["params"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["params"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      params = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("traffic") != m.end() && !m["traffic"].empty()) {
      traffic = make_shared<long>(boost::any_cast<long>(m["traffic"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<long>(boost::any_cast<long>(m["updated"]));
    }
  }


  virtual ~CreateABTestExperimentResponseBodyResult() = default;
};
class CreateABTestExperimentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateABTestExperimentResponseBodyResult> result{};

  CreateABTestExperimentResponseBody() {}

  explicit CreateABTestExperimentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        CreateABTestExperimentResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<CreateABTestExperimentResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateABTestExperimentResponseBody() = default;
};
class CreateABTestExperimentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateABTestExperimentResponseBody> body{};

  CreateABTestExperimentResponse() {}

  explicit CreateABTestExperimentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateABTestExperimentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateABTestExperimentResponseBody>(model1);
      }
    }
  }


  virtual ~CreateABTestExperimentResponse() = default;
};
class CreateABTestGroupRequest : public Darabonba::Model {
public:
  shared_ptr<ABTestGroup> body{};
  shared_ptr<bool> dryRun{};

  CreateABTestGroupRequest() {}

  explicit CreateABTestGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dryRun) {
      res["dryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ABTestGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ABTestGroup>(model1);
      }
    }
    if (m.find("dryRun") != m.end() && !m["dryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["dryRun"]));
    }
  }


  virtual ~CreateABTestGroupRequest() = default;
};
class CreateABTestGroupResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> created{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<long> status{};
  shared_ptr<long> updated{};

  CreateABTestGroupResponseBodyResult() {}

  explicit CreateABTestGroupResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<long>(boost::any_cast<long>(m["created"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<long>(boost::any_cast<long>(m["updated"]));
    }
  }


  virtual ~CreateABTestGroupResponseBodyResult() = default;
};
class CreateABTestGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateABTestGroupResponseBodyResult> result{};

  CreateABTestGroupResponseBody() {}

  explicit CreateABTestGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        CreateABTestGroupResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<CreateABTestGroupResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateABTestGroupResponseBody() = default;
};
class CreateABTestGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateABTestGroupResponseBody> body{};

  CreateABTestGroupResponse() {}

  explicit CreateABTestGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateABTestGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateABTestGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateABTestGroupResponse() = default;
};
class CreateABTestSceneRequest : public Darabonba::Model {
public:
  shared_ptr<ABTestScene> body{};
  shared_ptr<bool> dryRun{};

  CreateABTestSceneRequest() {}

  explicit CreateABTestSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dryRun) {
      res["dryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ABTestScene model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ABTestScene>(model1);
      }
    }
    if (m.find("dryRun") != m.end() && !m["dryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["dryRun"]));
    }
  }


  virtual ~CreateABTestSceneRequest() = default;
};
class CreateABTestSceneResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> created{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<long> status{};
  shared_ptr<long> updated{};
  shared_ptr<vector<string>> values{};

  CreateABTestSceneResponseBodyResult() {}

  explicit CreateABTestSceneResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    if (values) {
      res["values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<long>(boost::any_cast<long>(m["created"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<long>(boost::any_cast<long>(m["updated"]));
    }
    if (m.find("values") != m.end() && !m["values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateABTestSceneResponseBodyResult() = default;
};
class CreateABTestSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateABTestSceneResponseBodyResult> result{};

  CreateABTestSceneResponseBody() {}

  explicit CreateABTestSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        CreateABTestSceneResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<CreateABTestSceneResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateABTestSceneResponseBody() = default;
};
class CreateABTestSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateABTestSceneResponseBody> body{};

  CreateABTestSceneResponse() {}

  explicit CreateABTestSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateABTestSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateABTestSceneResponseBody>(model1);
      }
    }
  }


  virtual ~CreateABTestSceneResponse() = default;
};
class CreateAppRequest : public Darabonba::Model {
public:
  shared_ptr<App> body{};
  shared_ptr<bool> dryRun{};

  CreateAppRequest() {}

  explicit CreateAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dryRun) {
      res["dryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        App model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<App>(model1);
      }
    }
    if (m.find("dryRun") != m.end() && !m["dryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["dryRun"]));
    }
  }


  virtual ~CreateAppRequest() = default;
};
class CreateAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  CreateAppResponseBody() {}

  explicit CreateAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~CreateAppResponseBody() = default;
};
class CreateAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAppResponseBody> body{};

  CreateAppResponse() {}

  explicit CreateAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAppResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAppResponse() = default;
};
class CreateAppGroupRequest : public Darabonba::Model {
public:
  shared_ptr<AppGroup> body{};

  CreateAppGroupRequest() {}

  explicit CreateAppGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AppGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AppGroup>(model1);
      }
    }
  }


  virtual ~CreateAppGroupRequest() = default;
};
class CreateAppGroupResponseBodyResultQuota : public Darabonba::Model {
public:
  shared_ptr<long> computeResource{};
  shared_ptr<long> docSize{};
  shared_ptr<string> spec{};

  CreateAppGroupResponseBodyResultQuota() {}

  explicit CreateAppGroupResponseBodyResultQuota(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (computeResource) {
      res["computeResource"] = boost::any(*computeResource);
    }
    if (docSize) {
      res["docSize"] = boost::any(*docSize);
    }
    if (spec) {
      res["spec"] = boost::any(*spec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("computeResource") != m.end() && !m["computeResource"].empty()) {
      computeResource = make_shared<long>(boost::any_cast<long>(m["computeResource"]));
    }
    if (m.find("docSize") != m.end() && !m["docSize"].empty()) {
      docSize = make_shared<long>(boost::any_cast<long>(m["docSize"]));
    }
    if (m.find("spec") != m.end() && !m["spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["spec"]));
    }
  }


  virtual ~CreateAppGroupResponseBodyResultQuota() = default;
};
class CreateAppGroupResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<long> chargingWay{};
  shared_ptr<string> commodityCode{};
  shared_ptr<long> created{};
  shared_ptr<string> currentVersion{};
  shared_ptr<string> description{};
  shared_ptr<string> domain{};
  shared_ptr<string> expireOn{};
  shared_ptr<long> firstRankAlgoDeploymentId{};
  shared_ptr<long> hasPendingQuotaReviewTask{};
  shared_ptr<string> id{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> lockMode{};
  shared_ptr<long> lockedByExpiration{};
  shared_ptr<string> name{};
  shared_ptr<long> pendingSecondRankAlgoDeploymentId{};
  shared_ptr<string> processingOrderId{};
  shared_ptr<long> produced{};
  shared_ptr<string> projectId{};
  shared_ptr<CreateAppGroupResponseBodyResultQuota> quota{};
  shared_ptr<long> secondRankAlgoDeploymentId{};
  shared_ptr<string> status{};
  shared_ptr<long> switchedTime{};
  shared_ptr<string> type{};
  shared_ptr<long> updated{};

  CreateAppGroupResponseBodyResult() {}

  explicit CreateAppGroupResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["chargeType"] = boost::any(*chargeType);
    }
    if (chargingWay) {
      res["chargingWay"] = boost::any(*chargingWay);
    }
    if (commodityCode) {
      res["commodityCode"] = boost::any(*commodityCode);
    }
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (currentVersion) {
      res["currentVersion"] = boost::any(*currentVersion);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    if (expireOn) {
      res["expireOn"] = boost::any(*expireOn);
    }
    if (firstRankAlgoDeploymentId) {
      res["firstRankAlgoDeploymentId"] = boost::any(*firstRankAlgoDeploymentId);
    }
    if (hasPendingQuotaReviewTask) {
      res["hasPendingQuotaReviewTask"] = boost::any(*hasPendingQuotaReviewTask);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (lockMode) {
      res["lockMode"] = boost::any(*lockMode);
    }
    if (lockedByExpiration) {
      res["lockedByExpiration"] = boost::any(*lockedByExpiration);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (pendingSecondRankAlgoDeploymentId) {
      res["pendingSecondRankAlgoDeploymentId"] = boost::any(*pendingSecondRankAlgoDeploymentId);
    }
    if (processingOrderId) {
      res["processingOrderId"] = boost::any(*processingOrderId);
    }
    if (produced) {
      res["produced"] = boost::any(*produced);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (quota) {
      res["quota"] = quota ? boost::any(quota->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (secondRankAlgoDeploymentId) {
      res["secondRankAlgoDeploymentId"] = boost::any(*secondRankAlgoDeploymentId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (switchedTime) {
      res["switchedTime"] = boost::any(*switchedTime);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chargeType") != m.end() && !m["chargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["chargeType"]));
    }
    if (m.find("chargingWay") != m.end() && !m["chargingWay"].empty()) {
      chargingWay = make_shared<long>(boost::any_cast<long>(m["chargingWay"]));
    }
    if (m.find("commodityCode") != m.end() && !m["commodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["commodityCode"]));
    }
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<long>(boost::any_cast<long>(m["created"]));
    }
    if (m.find("currentVersion") != m.end() && !m["currentVersion"].empty()) {
      currentVersion = make_shared<string>(boost::any_cast<string>(m["currentVersion"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
    if (m.find("expireOn") != m.end() && !m["expireOn"].empty()) {
      expireOn = make_shared<string>(boost::any_cast<string>(m["expireOn"]));
    }
    if (m.find("firstRankAlgoDeploymentId") != m.end() && !m["firstRankAlgoDeploymentId"].empty()) {
      firstRankAlgoDeploymentId = make_shared<long>(boost::any_cast<long>(m["firstRankAlgoDeploymentId"]));
    }
    if (m.find("hasPendingQuotaReviewTask") != m.end() && !m["hasPendingQuotaReviewTask"].empty()) {
      hasPendingQuotaReviewTask = make_shared<long>(boost::any_cast<long>(m["hasPendingQuotaReviewTask"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("lockMode") != m.end() && !m["lockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["lockMode"]));
    }
    if (m.find("lockedByExpiration") != m.end() && !m["lockedByExpiration"].empty()) {
      lockedByExpiration = make_shared<long>(boost::any_cast<long>(m["lockedByExpiration"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("pendingSecondRankAlgoDeploymentId") != m.end() && !m["pendingSecondRankAlgoDeploymentId"].empty()) {
      pendingSecondRankAlgoDeploymentId = make_shared<long>(boost::any_cast<long>(m["pendingSecondRankAlgoDeploymentId"]));
    }
    if (m.find("processingOrderId") != m.end() && !m["processingOrderId"].empty()) {
      processingOrderId = make_shared<string>(boost::any_cast<string>(m["processingOrderId"]));
    }
    if (m.find("produced") != m.end() && !m["produced"].empty()) {
      produced = make_shared<long>(boost::any_cast<long>(m["produced"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("quota") != m.end() && !m["quota"].empty()) {
      if (typeid(map<string, boost::any>) == m["quota"].type()) {
        CreateAppGroupResponseBodyResultQuota model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["quota"]));
        quota = make_shared<CreateAppGroupResponseBodyResultQuota>(model1);
      }
    }
    if (m.find("secondRankAlgoDeploymentId") != m.end() && !m["secondRankAlgoDeploymentId"].empty()) {
      secondRankAlgoDeploymentId = make_shared<long>(boost::any_cast<long>(m["secondRankAlgoDeploymentId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("switchedTime") != m.end() && !m["switchedTime"].empty()) {
      switchedTime = make_shared<long>(boost::any_cast<long>(m["switchedTime"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<long>(boost::any_cast<long>(m["updated"]));
    }
  }


  virtual ~CreateAppGroupResponseBodyResult() = default;
};
class CreateAppGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateAppGroupResponseBodyResult> result{};

  CreateAppGroupResponseBody() {}

  explicit CreateAppGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        CreateAppGroupResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<CreateAppGroupResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateAppGroupResponseBody() = default;
};
class CreateAppGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAppGroupResponseBody> body{};

  CreateAppGroupResponse() {}

  explicit CreateAppGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateAppGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAppGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAppGroupResponse() = default;
};
class CreateFirstRankRequest : public Darabonba::Model {
public:
  shared_ptr<FirstRank> body{};
  shared_ptr<bool> dryRun{};

  CreateFirstRankRequest() {}

  explicit CreateFirstRankRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dryRun) {
      res["dryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        FirstRank model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FirstRank>(model1);
      }
    }
    if (m.find("dryRun") != m.end() && !m["dryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["dryRun"]));
    }
  }


  virtual ~CreateFirstRankRequest() = default;
};
class CreateFirstRankResponseBodyResultMeta : public Darabonba::Model {
public:
  shared_ptr<string> arg{};
  shared_ptr<string> attribute{};
  shared_ptr<double> weight{};

  CreateFirstRankResponseBodyResultMeta() {}

  explicit CreateFirstRankResponseBodyResultMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arg) {
      res["arg"] = boost::any(*arg);
    }
    if (attribute) {
      res["attribute"] = boost::any(*attribute);
    }
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arg") != m.end() && !m["arg"].empty()) {
      arg = make_shared<string>(boost::any_cast<string>(m["arg"]));
    }
    if (m.find("attribute") != m.end() && !m["attribute"].empty()) {
      attribute = make_shared<string>(boost::any_cast<string>(m["attribute"]));
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<double>(boost::any_cast<double>(m["weight"]));
    }
  }


  virtual ~CreateFirstRankResponseBodyResultMeta() = default;
};
class CreateFirstRankResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<vector<CreateFirstRankResponseBodyResultMeta>> meta{};
  shared_ptr<string> name{};

  CreateFirstRankResponseBodyResult() {}

  explicit CreateFirstRankResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["active"] = boost::any(*active);
    }
    if (meta) {
      vector<boost::any> temp1;
      for(auto item1:*meta){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["meta"] = boost::any(temp1);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("active") != m.end() && !m["active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["active"]));
    }
    if (m.find("meta") != m.end() && !m["meta"].empty()) {
      if (typeid(vector<boost::any>) == m["meta"].type()) {
        vector<CreateFirstRankResponseBodyResultMeta> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["meta"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateFirstRankResponseBodyResultMeta model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        meta = make_shared<vector<CreateFirstRankResponseBodyResultMeta>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~CreateFirstRankResponseBodyResult() = default;
};
class CreateFirstRankResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateFirstRankResponseBodyResult> result{};

  CreateFirstRankResponseBody() {}

  explicit CreateFirstRankResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        CreateFirstRankResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<CreateFirstRankResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateFirstRankResponseBody() = default;
};
class CreateFirstRankResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFirstRankResponseBody> body{};

  CreateFirstRankResponse() {}

  explicit CreateFirstRankResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateFirstRankResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFirstRankResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFirstRankResponse() = default;
};
class CreateFunctionInstanceRequestCreateParameters : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  CreateFunctionInstanceRequestCreateParameters() {}

  explicit CreateFunctionInstanceRequestCreateParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~CreateFunctionInstanceRequestCreateParameters() = default;
};
class CreateFunctionInstanceRequestUsageParameters : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  CreateFunctionInstanceRequestUsageParameters() {}

  explicit CreateFunctionInstanceRequestUsageParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~CreateFunctionInstanceRequestUsageParameters() = default;
};
class CreateFunctionInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<vector<CreateFunctionInstanceRequestCreateParameters>> createParameters{};
  shared_ptr<string> cron{};
  shared_ptr<string> description{};
  shared_ptr<string> functionType{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> modelType{};
  shared_ptr<vector<CreateFunctionInstanceRequestUsageParameters>> usageParameters{};

  CreateFunctionInstanceRequest() {}

  explicit CreateFunctionInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createParameters) {
      vector<boost::any> temp1;
      for(auto item1:*createParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["createParameters"] = boost::any(temp1);
    }
    if (cron) {
      res["cron"] = boost::any(*cron);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (functionType) {
      res["functionType"] = boost::any(*functionType);
    }
    if (instanceName) {
      res["instanceName"] = boost::any(*instanceName);
    }
    if (modelType) {
      res["modelType"] = boost::any(*modelType);
    }
    if (usageParameters) {
      vector<boost::any> temp1;
      for(auto item1:*usageParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["usageParameters"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createParameters") != m.end() && !m["createParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["createParameters"].type()) {
        vector<CreateFunctionInstanceRequestCreateParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["createParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateFunctionInstanceRequestCreateParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        createParameters = make_shared<vector<CreateFunctionInstanceRequestCreateParameters>>(expect1);
      }
    }
    if (m.find("cron") != m.end() && !m["cron"].empty()) {
      cron = make_shared<string>(boost::any_cast<string>(m["cron"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("functionType") != m.end() && !m["functionType"].empty()) {
      functionType = make_shared<string>(boost::any_cast<string>(m["functionType"]));
    }
    if (m.find("instanceName") != m.end() && !m["instanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["instanceName"]));
    }
    if (m.find("modelType") != m.end() && !m["modelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["modelType"]));
    }
    if (m.find("usageParameters") != m.end() && !m["usageParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["usageParameters"].type()) {
        vector<CreateFunctionInstanceRequestUsageParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["usageParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateFunctionInstanceRequestUsageParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        usageParameters = make_shared<vector<CreateFunctionInstanceRequestUsageParameters>>(expect1);
      }
    }
  }


  virtual ~CreateFunctionInstanceRequest() = default;
};
class CreateFunctionInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpCode{};
  shared_ptr<long> latency{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  CreateFunctionInstanceResponseBody() {}

  explicit CreateFunctionInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (latency) {
      res["Latency"] = boost::any(*latency);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["HttpCode"]));
    }
    if (m.find("Latency") != m.end() && !m["Latency"].empty()) {
      latency = make_shared<long>(boost::any_cast<long>(m["Latency"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CreateFunctionInstanceResponseBody() = default;
};
class CreateFunctionInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFunctionInstanceResponseBody> body{};

  CreateFunctionInstanceResponse() {}

  explicit CreateFunctionInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateFunctionInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFunctionInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFunctionInstanceResponse() = default;
};
class CreateFunctionTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpCode{};
  shared_ptr<long> latency{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  CreateFunctionTaskResponseBody() {}

  explicit CreateFunctionTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (latency) {
      res["Latency"] = boost::any(*latency);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["HttpCode"]));
    }
    if (m.find("Latency") != m.end() && !m["Latency"].empty()) {
      latency = make_shared<long>(boost::any_cast<long>(m["Latency"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CreateFunctionTaskResponseBody() = default;
};
class CreateFunctionTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFunctionTaskResponseBody> body{};

  CreateFunctionTaskResponse() {}

  explicit CreateFunctionTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateFunctionTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFunctionTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFunctionTaskResponse() = default;
};
class CreateInterventionDictionaryRequest : public Darabonba::Model {
public:
  shared_ptr<string> analyzerType{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<bool> dryRun{};

  CreateInterventionDictionaryRequest() {}

  explicit CreateInterventionDictionaryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (analyzerType) {
      res["analyzerType"] = boost::any(*analyzerType);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (dryRun) {
      res["dryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("analyzerType") != m.end() && !m["analyzerType"].empty()) {
      analyzerType = make_shared<string>(boost::any_cast<string>(m["analyzerType"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("dryRun") != m.end() && !m["dryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["dryRun"]));
    }
  }


  virtual ~CreateInterventionDictionaryRequest() = default;
};
class CreateInterventionDictionaryResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> analyzer{};
  shared_ptr<string> created{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> updated{};

  CreateInterventionDictionaryResponseBodyResult() {}

  explicit CreateInterventionDictionaryResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (analyzer) {
      res["analyzer"] = boost::any(*analyzer);
    }
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("analyzer") != m.end() && !m["analyzer"].empty()) {
      analyzer = make_shared<string>(boost::any_cast<string>(m["analyzer"]));
    }
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<string>(boost::any_cast<string>(m["created"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<string>(boost::any_cast<string>(m["updated"]));
    }
  }


  virtual ~CreateInterventionDictionaryResponseBodyResult() = default;
};
class CreateInterventionDictionaryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateInterventionDictionaryResponseBodyResult> result{};

  CreateInterventionDictionaryResponseBody() {}

  explicit CreateInterventionDictionaryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        CreateInterventionDictionaryResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<CreateInterventionDictionaryResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateInterventionDictionaryResponseBody() = default;
};
class CreateInterventionDictionaryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateInterventionDictionaryResponseBody> body{};

  CreateInterventionDictionaryResponse() {}

  explicit CreateInterventionDictionaryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateInterventionDictionaryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateInterventionDictionaryResponseBody>(model1);
      }
    }
  }


  virtual ~CreateInterventionDictionaryResponse() = default;
};
class CreateQueryProcessorRequest : public Darabonba::Model {
public:
  shared_ptr<boost::any> body{};
  shared_ptr<bool> dryRun{};

  CreateQueryProcessorRequest() {}

  explicit CreateQueryProcessorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    if (dryRun) {
      res["dryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<boost::any>(boost::any_cast<boost::any>(m["body"]));
    }
    if (m.find("dryRun") != m.end() && !m["dryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["dryRun"]));
    }
  }


  virtual ~CreateQueryProcessorRequest() = default;
};
class CreateQueryProcessorResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<long> created{};
  shared_ptr<string> domain{};
  shared_ptr<vector<string>> indexes{};
  shared_ptr<string> name{};
  shared_ptr<vector<map<string, boost::any>>> processors{};
  shared_ptr<long> updated{};

  CreateQueryProcessorResponseBodyResult() {}

  explicit CreateQueryProcessorResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["active"] = boost::any(*active);
    }
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    if (indexes) {
      res["indexes"] = boost::any(*indexes);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (processors) {
      res["processors"] = boost::any(*processors);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("active") != m.end() && !m["active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["active"]));
    }
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<long>(boost::any_cast<long>(m["created"]));
    }
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
    if (m.find("indexes") != m.end() && !m["indexes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["indexes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["indexes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      indexes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("processors") != m.end() && !m["processors"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["processors"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["processors"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      processors = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<long>(boost::any_cast<long>(m["updated"]));
    }
  }


  virtual ~CreateQueryProcessorResponseBodyResult() = default;
};
class CreateQueryProcessorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateQueryProcessorResponseBodyResult> result{};

  CreateQueryProcessorResponseBody() {}

  explicit CreateQueryProcessorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        CreateQueryProcessorResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<CreateQueryProcessorResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CreateQueryProcessorResponseBody() = default;
};
class CreateQueryProcessorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateQueryProcessorResponseBody> body{};

  CreateQueryProcessorResponse() {}

  explicit CreateQueryProcessorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateQueryProcessorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateQueryProcessorResponseBody>(model1);
      }
    }
  }


  virtual ~CreateQueryProcessorResponse() = default;
};
class CreateScheduledTaskRequest : public Darabonba::Model {
public:
  shared_ptr<ScheduledTask> body{};

  CreateScheduledTaskRequest() {}

  explicit CreateScheduledTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ScheduledTask model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ScheduledTask>(model1);
      }
    }
  }


  virtual ~CreateScheduledTaskRequest() = default;
};
class CreateScheduledTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  CreateScheduledTaskResponseBody() {}

  explicit CreateScheduledTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~CreateScheduledTaskResponseBody() = default;
};
class CreateScheduledTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateScheduledTaskResponseBody> body{};

  CreateScheduledTaskResponse() {}

  explicit CreateScheduledTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateScheduledTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateScheduledTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateScheduledTaskResponse() = default;
};
class CreateSearchStrategyRequest : public Darabonba::Model {
public:
  shared_ptr<SearchStrategy> body{};

  CreateSearchStrategyRequest() {}

  explicit CreateSearchStrategyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SearchStrategy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchStrategy>(model1);
      }
    }
  }


  virtual ~CreateSearchStrategyRequest() = default;
};
class CreateSearchStrategyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateSearchStrategyResponseBody() {}

  explicit CreateSearchStrategyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateSearchStrategyResponseBody() = default;
};
class CreateSearchStrategyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSearchStrategyResponseBody> body{};

  CreateSearchStrategyResponse() {}

  explicit CreateSearchStrategyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateSearchStrategyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSearchStrategyResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSearchStrategyResponse() = default;
};
class CreateSecondRankRequest : public Darabonba::Model {
public:
  shared_ptr<SecondRank> body{};
  shared_ptr<bool> dryRun{};

  CreateSecondRankRequest() {}

  explicit CreateSecondRankRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dryRun) {
      res["dryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SecondRank model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SecondRank>(model1);
      }
    }
    if (m.find("dryRun") != m.end() && !m["dryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["dryRun"]));
    }
  }


  virtual ~CreateSecondRankRequest() = default;
};
class CreateSecondRankResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  CreateSecondRankResponseBody() {}

  explicit CreateSecondRankResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~CreateSecondRankResponseBody() = default;
};
class CreateSecondRankResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSecondRankResponseBody> body{};

  CreateSecondRankResponse() {}

  explicit CreateSecondRankResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateSecondRankResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSecondRankResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSecondRankResponse() = default;
};
class CreateSortScriptResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateSortScriptResponseBody() {}

  explicit CreateSortScriptResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateSortScriptResponseBody() = default;
};
class CreateSortScriptResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSortScriptResponseBody> body{};

  CreateSortScriptResponse() {}

  explicit CreateSortScriptResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateSortScriptResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSortScriptResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSortScriptResponse() = default;
};
class CreateUserAnalyzerRequest : public Darabonba::Model {
public:
  shared_ptr<string> business{};
  shared_ptr<string> businessAppGroupId{};
  shared_ptr<string> businessType{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<bool> dryRun{};

  CreateUserAnalyzerRequest() {}

  explicit CreateUserAnalyzerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (business) {
      res["business"] = boost::any(*business);
    }
    if (businessAppGroupId) {
      res["businessAppGroupId"] = boost::any(*businessAppGroupId);
    }
    if (businessType) {
      res["businessType"] = boost::any(*businessType);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (dryRun) {
      res["dryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("business") != m.end() && !m["business"].empty()) {
      business = make_shared<string>(boost::any_cast<string>(m["business"]));
    }
    if (m.find("businessAppGroupId") != m.end() && !m["businessAppGroupId"].empty()) {
      businessAppGroupId = make_shared<string>(boost::any_cast<string>(m["businessAppGroupId"]));
    }
    if (m.find("businessType") != m.end() && !m["businessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["businessType"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("dryRun") != m.end() && !m["dryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["dryRun"]));
    }
  }


  virtual ~CreateUserAnalyzerRequest() = default;
};
class CreateUserAnalyzerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  CreateUserAnalyzerResponseBody() {}

  explicit CreateUserAnalyzerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~CreateUserAnalyzerResponseBody() = default;
};
class CreateUserAnalyzerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateUserAnalyzerResponseBody> body{};

  CreateUserAnalyzerResponse() {}

  explicit CreateUserAnalyzerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateUserAnalyzerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateUserAnalyzerResponseBody>(model1);
      }
    }
  }


  virtual ~CreateUserAnalyzerResponse() = default;
};
class DeleteABTestExperimentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  DeleteABTestExperimentResponseBody() {}

  explicit DeleteABTestExperimentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~DeleteABTestExperimentResponseBody() = default;
};
class DeleteABTestExperimentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteABTestExperimentResponseBody> body{};

  DeleteABTestExperimentResponse() {}

  explicit DeleteABTestExperimentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteABTestExperimentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteABTestExperimentResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteABTestExperimentResponse() = default;
};
class DeleteABTestGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  DeleteABTestGroupResponseBody() {}

  explicit DeleteABTestGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~DeleteABTestGroupResponseBody() = default;
};
class DeleteABTestGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteABTestGroupResponseBody> body{};

  DeleteABTestGroupResponse() {}

  explicit DeleteABTestGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteABTestGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteABTestGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteABTestGroupResponse() = default;
};
class DeleteABTestSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  DeleteABTestSceneResponseBody() {}

  explicit DeleteABTestSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~DeleteABTestSceneResponseBody() = default;
};
class DeleteABTestSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteABTestSceneResponseBody> body{};

  DeleteABTestSceneResponse() {}

  explicit DeleteABTestSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteABTestSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteABTestSceneResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteABTestSceneResponse() = default;
};
class DeleteFunctionInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpCode{};
  shared_ptr<long> latency{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  DeleteFunctionInstanceResponseBody() {}

  explicit DeleteFunctionInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (latency) {
      res["Latency"] = boost::any(*latency);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["HttpCode"]));
    }
    if (m.find("Latency") != m.end() && !m["Latency"].empty()) {
      latency = make_shared<long>(boost::any_cast<long>(m["Latency"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DeleteFunctionInstanceResponseBody() = default;
};
class DeleteFunctionInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFunctionInstanceResponseBody> body{};

  DeleteFunctionInstanceResponse() {}

  explicit DeleteFunctionInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteFunctionInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFunctionInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFunctionInstanceResponse() = default;
};
class DeleteFunctionTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpCode{};
  shared_ptr<long> latency{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  DeleteFunctionTaskResponseBody() {}

  explicit DeleteFunctionTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (latency) {
      res["Latency"] = boost::any(*latency);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["HttpCode"]));
    }
    if (m.find("Latency") != m.end() && !m["Latency"].empty()) {
      latency = make_shared<long>(boost::any_cast<long>(m["Latency"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DeleteFunctionTaskResponseBody() = default;
};
class DeleteFunctionTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFunctionTaskResponseBody> body{};

  DeleteFunctionTaskResponse() {}

  explicit DeleteFunctionTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteFunctionTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFunctionTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFunctionTaskResponse() = default;
};
class DeleteSortScriptResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteSortScriptResponseBody() {}

  explicit DeleteSortScriptResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteSortScriptResponseBody() = default;
};
class DeleteSortScriptResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSortScriptResponseBody> body{};

  DeleteSortScriptResponse() {}

  explicit DeleteSortScriptResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteSortScriptResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSortScriptResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSortScriptResponse() = default;
};
class DeleteSortScriptFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteSortScriptFileResponseBody() {}

  explicit DeleteSortScriptFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteSortScriptFileResponseBody() = default;
};
class DeleteSortScriptFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSortScriptFileResponseBody> body{};

  DeleteSortScriptFileResponse() {}

  explicit DeleteSortScriptFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteSortScriptFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSortScriptFileResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSortScriptFileResponse() = default;
};
class DescribeABTestExperimentResponseBodyResultParams : public Darabonba::Model {
public:
  shared_ptr<string> firstFormulaName{};

  DescribeABTestExperimentResponseBodyResultParams() {}

  explicit DescribeABTestExperimentResponseBodyResultParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (firstFormulaName) {
      res["first_formula_name"] = boost::any(*firstFormulaName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("first_formula_name") != m.end() && !m["first_formula_name"].empty()) {
      firstFormulaName = make_shared<string>(boost::any_cast<string>(m["first_formula_name"]));
    }
  }


  virtual ~DescribeABTestExperimentResponseBodyResultParams() = default;
};
class DescribeABTestExperimentResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> created{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<bool> online{};
  shared_ptr<DescribeABTestExperimentResponseBodyResultParams> params{};
  shared_ptr<long> traffic{};
  shared_ptr<long> updated{};

  DescribeABTestExperimentResponseBodyResult() {}

  explicit DescribeABTestExperimentResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (online) {
      res["online"] = boost::any(*online);
    }
    if (params) {
      res["params"] = params ? boost::any(params->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (traffic) {
      res["traffic"] = boost::any(*traffic);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<long>(boost::any_cast<long>(m["created"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("online") != m.end() && !m["online"].empty()) {
      online = make_shared<bool>(boost::any_cast<bool>(m["online"]));
    }
    if (m.find("params") != m.end() && !m["params"].empty()) {
      if (typeid(map<string, boost::any>) == m["params"].type()) {
        DescribeABTestExperimentResponseBodyResultParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["params"]));
        params = make_shared<DescribeABTestExperimentResponseBodyResultParams>(model1);
      }
    }
    if (m.find("traffic") != m.end() && !m["traffic"].empty()) {
      traffic = make_shared<long>(boost::any_cast<long>(m["traffic"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<long>(boost::any_cast<long>(m["updated"]));
    }
  }


  virtual ~DescribeABTestExperimentResponseBodyResult() = default;
};
class DescribeABTestExperimentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeABTestExperimentResponseBodyResult> result{};

  DescribeABTestExperimentResponseBody() {}

  explicit DescribeABTestExperimentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        DescribeABTestExperimentResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<DescribeABTestExperimentResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DescribeABTestExperimentResponseBody() = default;
};
class DescribeABTestExperimentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeABTestExperimentResponseBody> body{};

  DescribeABTestExperimentResponse() {}

  explicit DescribeABTestExperimentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeABTestExperimentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeABTestExperimentResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeABTestExperimentResponse() = default;
};
class DescribeABTestGroupResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> created{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<long> status{};
  shared_ptr<long> updated{};

  DescribeABTestGroupResponseBodyResult() {}

  explicit DescribeABTestGroupResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<long>(boost::any_cast<long>(m["created"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<long>(boost::any_cast<long>(m["updated"]));
    }
  }


  virtual ~DescribeABTestGroupResponseBodyResult() = default;
};
class DescribeABTestGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeABTestGroupResponseBodyResult> result{};

  DescribeABTestGroupResponseBody() {}

  explicit DescribeABTestGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        DescribeABTestGroupResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<DescribeABTestGroupResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DescribeABTestGroupResponseBody() = default;
};
class DescribeABTestGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeABTestGroupResponseBody> body{};

  DescribeABTestGroupResponse() {}

  explicit DescribeABTestGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeABTestGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeABTestGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeABTestGroupResponse() = default;
};
class DescribeABTestSceneResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> created{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<long> status{};
  shared_ptr<long> updated{};
  shared_ptr<vector<string>> values{};

  DescribeABTestSceneResponseBodyResult() {}

  explicit DescribeABTestSceneResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    if (values) {
      res["values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<long>(boost::any_cast<long>(m["created"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<long>(boost::any_cast<long>(m["updated"]));
    }
    if (m.find("values") != m.end() && !m["values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeABTestSceneResponseBodyResult() = default;
};
class DescribeABTestSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeABTestSceneResponseBodyResult> result{};

  DescribeABTestSceneResponseBody() {}

  explicit DescribeABTestSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        DescribeABTestSceneResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<DescribeABTestSceneResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DescribeABTestSceneResponseBody() = default;
};
class DescribeABTestSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeABTestSceneResponseBody> body{};

  DescribeABTestSceneResponse() {}

  explicit DescribeABTestSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeABTestSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeABTestSceneResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeABTestSceneResponse() = default;
};
class DescribeAppResponseBodyResultDomainFunctions : public Darabonba::Model {
public:
  shared_ptr<vector<string>> algo{};
  shared_ptr<vector<string>> qp{};
  shared_ptr<vector<string>> service{};

  DescribeAppResponseBodyResultDomainFunctions() {}

  explicit DescribeAppResponseBodyResultDomainFunctions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algo) {
      res["algo"] = boost::any(*algo);
    }
    if (qp) {
      res["qp"] = boost::any(*qp);
    }
    if (service) {
      res["service"] = boost::any(*service);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("algo") != m.end() && !m["algo"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["algo"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["algo"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      algo = make_shared<vector<string>>(toVec1);
    }
    if (m.find("qp") != m.end() && !m["qp"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["qp"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["qp"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      qp = make_shared<vector<string>>(toVec1);
    }
    if (m.find("service") != m.end() && !m["service"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["service"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["service"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      service = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeAppResponseBodyResultDomainFunctions() = default;
};
class DescribeAppResponseBodyResultDomain : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<DescribeAppResponseBodyResultDomainFunctions> functions{};
  shared_ptr<string> name{};

  DescribeAppResponseBodyResultDomain() {}

  explicit DescribeAppResponseBodyResultDomain(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (functions) {
      res["functions"] = functions ? boost::any(functions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("functions") != m.end() && !m["functions"].empty()) {
      if (typeid(map<string, boost::any>) == m["functions"].type()) {
        DescribeAppResponseBodyResultDomainFunctions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["functions"]));
        functions = make_shared<DescribeAppResponseBodyResultDomainFunctions>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~DescribeAppResponseBodyResultDomain() = default;
};
class DescribeAppResponseBodyResultQuota : public Darabonba::Model {
public:
  shared_ptr<long> computeResource{};
  shared_ptr<long> docSize{};
  shared_ptr<long> qps{};
  shared_ptr<string> spec{};

  DescribeAppResponseBodyResultQuota() {}

  explicit DescribeAppResponseBodyResultQuota(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (computeResource) {
      res["computeResource"] = boost::any(*computeResource);
    }
    if (docSize) {
      res["docSize"] = boost::any(*docSize);
    }
    if (qps) {
      res["qps"] = boost::any(*qps);
    }
    if (spec) {
      res["spec"] = boost::any(*spec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("computeResource") != m.end() && !m["computeResource"].empty()) {
      computeResource = make_shared<long>(boost::any_cast<long>(m["computeResource"]));
    }
    if (m.find("docSize") != m.end() && !m["docSize"].empty()) {
      docSize = make_shared<long>(boost::any_cast<long>(m["docSize"]));
    }
    if (m.find("qps") != m.end() && !m["qps"].empty()) {
      qps = make_shared<long>(boost::any_cast<long>(m["qps"]));
    }
    if (m.find("spec") != m.end() && !m["spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["spec"]));
    }
  }


  virtual ~DescribeAppResponseBodyResultQuota() = default;
};
class DescribeAppResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> algoDeploymentId{};
  shared_ptr<bool> autoSwitch{};
  shared_ptr<string> clusterName{};
  shared_ptr<long> created{};
  shared_ptr<string> description{};
  shared_ptr<DescribeAppResponseBodyResultDomain> domain{};
  shared_ptr<vector<string>> fetchFields{};
  shared_ptr<string> id{};
  shared_ptr<long> progressPercent{};
  shared_ptr<DescribeAppResponseBodyResultQuota> quota{};
  shared_ptr<map<string, boost::any>> schema{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  DescribeAppResponseBodyResult() {}

  explicit DescribeAppResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algoDeploymentId) {
      res["algoDeploymentId"] = boost::any(*algoDeploymentId);
    }
    if (autoSwitch) {
      res["autoSwitch"] = boost::any(*autoSwitch);
    }
    if (clusterName) {
      res["clusterName"] = boost::any(*clusterName);
    }
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (domain) {
      res["domain"] = domain ? boost::any(domain->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fetchFields) {
      res["fetchFields"] = boost::any(*fetchFields);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (progressPercent) {
      res["progressPercent"] = boost::any(*progressPercent);
    }
    if (quota) {
      res["quota"] = quota ? boost::any(quota->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (schema) {
      res["schema"] = boost::any(*schema);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("algoDeploymentId") != m.end() && !m["algoDeploymentId"].empty()) {
      algoDeploymentId = make_shared<long>(boost::any_cast<long>(m["algoDeploymentId"]));
    }
    if (m.find("autoSwitch") != m.end() && !m["autoSwitch"].empty()) {
      autoSwitch = make_shared<bool>(boost::any_cast<bool>(m["autoSwitch"]));
    }
    if (m.find("clusterName") != m.end() && !m["clusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["clusterName"]));
    }
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<long>(boost::any_cast<long>(m["created"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      if (typeid(map<string, boost::any>) == m["domain"].type()) {
        DescribeAppResponseBodyResultDomain model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["domain"]));
        domain = make_shared<DescribeAppResponseBodyResultDomain>(model1);
      }
    }
    if (m.find("fetchFields") != m.end() && !m["fetchFields"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["fetchFields"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["fetchFields"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fetchFields = make_shared<vector<string>>(toVec1);
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("progressPercent") != m.end() && !m["progressPercent"].empty()) {
      progressPercent = make_shared<long>(boost::any_cast<long>(m["progressPercent"]));
    }
    if (m.find("quota") != m.end() && !m["quota"].empty()) {
      if (typeid(map<string, boost::any>) == m["quota"].type()) {
        DescribeAppResponseBodyResultQuota model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["quota"]));
        quota = make_shared<DescribeAppResponseBodyResultQuota>(model1);
      }
    }
    if (m.find("schema") != m.end() && !m["schema"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["schema"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      schema = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~DescribeAppResponseBodyResult() = default;
};
class DescribeAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeAppResponseBodyResult> result{};

  DescribeAppResponseBody() {}

  explicit DescribeAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        DescribeAppResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<DescribeAppResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DescribeAppResponseBody() = default;
};
class DescribeAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAppResponseBody> body{};

  DescribeAppResponse() {}

  explicit DescribeAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAppResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAppResponse() = default;
};
class DescribeAppGroupResponseBodyResultQuota : public Darabonba::Model {
public:
  shared_ptr<long> computeResource{};
  shared_ptr<long> docSize{};
  shared_ptr<string> spec{};

  DescribeAppGroupResponseBodyResultQuota() {}

  explicit DescribeAppGroupResponseBodyResultQuota(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (computeResource) {
      res["computeResource"] = boost::any(*computeResource);
    }
    if (docSize) {
      res["docSize"] = boost::any(*docSize);
    }
    if (spec) {
      res["spec"] = boost::any(*spec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("computeResource") != m.end() && !m["computeResource"].empty()) {
      computeResource = make_shared<long>(boost::any_cast<long>(m["computeResource"]));
    }
    if (m.find("docSize") != m.end() && !m["docSize"].empty()) {
      docSize = make_shared<long>(boost::any_cast<long>(m["docSize"]));
    }
    if (m.find("spec") != m.end() && !m["spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["spec"]));
    }
  }


  virtual ~DescribeAppGroupResponseBodyResultQuota() = default;
};
class DescribeAppGroupResponseBodyResultTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeAppGroupResponseBodyResultTags() {}

  explicit DescribeAppGroupResponseBodyResultTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~DescribeAppGroupResponseBodyResultTags() = default;
};
class DescribeAppGroupResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<long> chargingWay{};
  shared_ptr<string> commodityCode{};
  shared_ptr<long> created{};
  shared_ptr<string> currentVersion{};
  shared_ptr<string> description{};
  shared_ptr<string> domain{};
  shared_ptr<string> expireOn{};
  shared_ptr<long> firstRankAlgoDeploymentId{};
  shared_ptr<long> hasPendingQuotaReviewTask{};
  shared_ptr<string> id{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> lockMode{};
  shared_ptr<long> lockedByExpiration{};
  shared_ptr<string> name{};
  shared_ptr<long> pendingSecondRankAlgoDeploymentId{};
  shared_ptr<string> processingOrderId{};
  shared_ptr<long> produced{};
  shared_ptr<string> projectId{};
  shared_ptr<DescribeAppGroupResponseBodyResultQuota> quota{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> secondRankAlgoDeploymentId{};
  shared_ptr<string> status{};
  shared_ptr<long> switchedTime{};
  shared_ptr<vector<DescribeAppGroupResponseBodyResultTags>> tags{};
  shared_ptr<string> type{};
  shared_ptr<long> updated{};

  DescribeAppGroupResponseBodyResult() {}

  explicit DescribeAppGroupResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["chargeType"] = boost::any(*chargeType);
    }
    if (chargingWay) {
      res["chargingWay"] = boost::any(*chargingWay);
    }
    if (commodityCode) {
      res["commodityCode"] = boost::any(*commodityCode);
    }
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (currentVersion) {
      res["currentVersion"] = boost::any(*currentVersion);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    if (expireOn) {
      res["expireOn"] = boost::any(*expireOn);
    }
    if (firstRankAlgoDeploymentId) {
      res["firstRankAlgoDeploymentId"] = boost::any(*firstRankAlgoDeploymentId);
    }
    if (hasPendingQuotaReviewTask) {
      res["hasPendingQuotaReviewTask"] = boost::any(*hasPendingQuotaReviewTask);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (lockMode) {
      res["lockMode"] = boost::any(*lockMode);
    }
    if (lockedByExpiration) {
      res["lockedByExpiration"] = boost::any(*lockedByExpiration);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (pendingSecondRankAlgoDeploymentId) {
      res["pendingSecondRankAlgoDeploymentId"] = boost::any(*pendingSecondRankAlgoDeploymentId);
    }
    if (processingOrderId) {
      res["processingOrderId"] = boost::any(*processingOrderId);
    }
    if (produced) {
      res["produced"] = boost::any(*produced);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (quota) {
      res["quota"] = quota ? boost::any(quota->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (secondRankAlgoDeploymentId) {
      res["secondRankAlgoDeploymentId"] = boost::any(*secondRankAlgoDeploymentId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (switchedTime) {
      res["switchedTime"] = boost::any(*switchedTime);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chargeType") != m.end() && !m["chargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["chargeType"]));
    }
    if (m.find("chargingWay") != m.end() && !m["chargingWay"].empty()) {
      chargingWay = make_shared<long>(boost::any_cast<long>(m["chargingWay"]));
    }
    if (m.find("commodityCode") != m.end() && !m["commodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["commodityCode"]));
    }
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<long>(boost::any_cast<long>(m["created"]));
    }
    if (m.find("currentVersion") != m.end() && !m["currentVersion"].empty()) {
      currentVersion = make_shared<string>(boost::any_cast<string>(m["currentVersion"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
    if (m.find("expireOn") != m.end() && !m["expireOn"].empty()) {
      expireOn = make_shared<string>(boost::any_cast<string>(m["expireOn"]));
    }
    if (m.find("firstRankAlgoDeploymentId") != m.end() && !m["firstRankAlgoDeploymentId"].empty()) {
      firstRankAlgoDeploymentId = make_shared<long>(boost::any_cast<long>(m["firstRankAlgoDeploymentId"]));
    }
    if (m.find("hasPendingQuotaReviewTask") != m.end() && !m["hasPendingQuotaReviewTask"].empty()) {
      hasPendingQuotaReviewTask = make_shared<long>(boost::any_cast<long>(m["hasPendingQuotaReviewTask"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("lockMode") != m.end() && !m["lockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["lockMode"]));
    }
    if (m.find("lockedByExpiration") != m.end() && !m["lockedByExpiration"].empty()) {
      lockedByExpiration = make_shared<long>(boost::any_cast<long>(m["lockedByExpiration"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("pendingSecondRankAlgoDeploymentId") != m.end() && !m["pendingSecondRankAlgoDeploymentId"].empty()) {
      pendingSecondRankAlgoDeploymentId = make_shared<long>(boost::any_cast<long>(m["pendingSecondRankAlgoDeploymentId"]));
    }
    if (m.find("processingOrderId") != m.end() && !m["processingOrderId"].empty()) {
      processingOrderId = make_shared<string>(boost::any_cast<string>(m["processingOrderId"]));
    }
    if (m.find("produced") != m.end() && !m["produced"].empty()) {
      produced = make_shared<long>(boost::any_cast<long>(m["produced"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("quota") != m.end() && !m["quota"].empty()) {
      if (typeid(map<string, boost::any>) == m["quota"].type()) {
        DescribeAppGroupResponseBodyResultQuota model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["quota"]));
        quota = make_shared<DescribeAppGroupResponseBodyResultQuota>(model1);
      }
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("secondRankAlgoDeploymentId") != m.end() && !m["secondRankAlgoDeploymentId"].empty()) {
      secondRankAlgoDeploymentId = make_shared<long>(boost::any_cast<long>(m["secondRankAlgoDeploymentId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("switchedTime") != m.end() && !m["switchedTime"].empty()) {
      switchedTime = make_shared<long>(boost::any_cast<long>(m["switchedTime"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<DescribeAppGroupResponseBodyResultTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAppGroupResponseBodyResultTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<DescribeAppGroupResponseBodyResultTags>>(expect1);
      }
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<long>(boost::any_cast<long>(m["updated"]));
    }
  }


  virtual ~DescribeAppGroupResponseBodyResult() = default;
};
class DescribeAppGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeAppGroupResponseBodyResult> result{};

  DescribeAppGroupResponseBody() {}

  explicit DescribeAppGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        DescribeAppGroupResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<DescribeAppGroupResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DescribeAppGroupResponseBody() = default;
};
class DescribeAppGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAppGroupResponseBody> body{};

  DescribeAppGroupResponse() {}

  explicit DescribeAppGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAppGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAppGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAppGroupResponse() = default;
};
class DescribeAppStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  DescribeAppStatisticsResponseBody() {}

  explicit DescribeAppStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~DescribeAppStatisticsResponseBody() = default;
};
class DescribeAppStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAppStatisticsResponseBody> body{};

  DescribeAppStatisticsResponse() {}

  explicit DescribeAppStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAppStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAppStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAppStatisticsResponse() = default;
};
class DescribeAppsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<map<string, boost::any>>> result{};

  DescribeAppsResponseBody() {}

  explicit DescribeAppsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["result"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      result = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
  }


  virtual ~DescribeAppsResponseBody() = default;
};
class DescribeAppsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAppsResponseBody> body{};

  DescribeAppsResponse() {}

  explicit DescribeAppsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAppsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAppsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAppsResponse() = default;
};
class DescribeDataCollctionResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> created{};
  shared_ptr<string> dataCollectionType{};
  shared_ptr<string> id{};
  shared_ptr<string> industryName{};
  shared_ptr<string> name{};
  shared_ptr<long> status{};
  shared_ptr<string> sundialId{};
  shared_ptr<string> type{};
  shared_ptr<long> updated{};

  DescribeDataCollctionResponseBodyResult() {}

  explicit DescribeDataCollctionResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (dataCollectionType) {
      res["dataCollectionType"] = boost::any(*dataCollectionType);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (industryName) {
      res["industryName"] = boost::any(*industryName);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (sundialId) {
      res["sundialId"] = boost::any(*sundialId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<long>(boost::any_cast<long>(m["created"]));
    }
    if (m.find("dataCollectionType") != m.end() && !m["dataCollectionType"].empty()) {
      dataCollectionType = make_shared<string>(boost::any_cast<string>(m["dataCollectionType"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("industryName") != m.end() && !m["industryName"].empty()) {
      industryName = make_shared<string>(boost::any_cast<string>(m["industryName"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("sundialId") != m.end() && !m["sundialId"].empty()) {
      sundialId = make_shared<string>(boost::any_cast<string>(m["sundialId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<long>(boost::any_cast<long>(m["updated"]));
    }
  }


  virtual ~DescribeDataCollctionResponseBodyResult() = default;
};
class DescribeDataCollctionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDataCollctionResponseBodyResult> result{};

  DescribeDataCollctionResponseBody() {}

  explicit DescribeDataCollctionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        DescribeDataCollctionResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<DescribeDataCollctionResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DescribeDataCollctionResponseBody() = default;
};
class DescribeDataCollctionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDataCollctionResponseBody> body{};

  DescribeDataCollctionResponse() {}

  explicit DescribeDataCollctionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDataCollctionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDataCollctionResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDataCollctionResponse() = default;
};
class DescribeFirstRankResponseBodyResultMeta : public Darabonba::Model {
public:
  shared_ptr<string> arg{};
  shared_ptr<string> attribute{};
  shared_ptr<double> weight{};

  DescribeFirstRankResponseBodyResultMeta() {}

  explicit DescribeFirstRankResponseBodyResultMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arg) {
      res["arg"] = boost::any(*arg);
    }
    if (attribute) {
      res["attribute"] = boost::any(*attribute);
    }
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arg") != m.end() && !m["arg"].empty()) {
      arg = make_shared<string>(boost::any_cast<string>(m["arg"]));
    }
    if (m.find("attribute") != m.end() && !m["attribute"].empty()) {
      attribute = make_shared<string>(boost::any_cast<string>(m["attribute"]));
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<double>(boost::any_cast<double>(m["weight"]));
    }
  }


  virtual ~DescribeFirstRankResponseBodyResultMeta() = default;
};
class DescribeFirstRankResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<string> description{};
  shared_ptr<vector<DescribeFirstRankResponseBodyResultMeta>> meta{};
  shared_ptr<string> name{};

  DescribeFirstRankResponseBodyResult() {}

  explicit DescribeFirstRankResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["active"] = boost::any(*active);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (meta) {
      vector<boost::any> temp1;
      for(auto item1:*meta){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["meta"] = boost::any(temp1);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("active") != m.end() && !m["active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["active"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("meta") != m.end() && !m["meta"].empty()) {
      if (typeid(vector<boost::any>) == m["meta"].type()) {
        vector<DescribeFirstRankResponseBodyResultMeta> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["meta"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFirstRankResponseBodyResultMeta model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        meta = make_shared<vector<DescribeFirstRankResponseBodyResultMeta>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~DescribeFirstRankResponseBodyResult() = default;
};
class DescribeFirstRankResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeFirstRankResponseBodyResult> result{};

  DescribeFirstRankResponseBody() {}

  explicit DescribeFirstRankResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        DescribeFirstRankResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<DescribeFirstRankResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DescribeFirstRankResponseBody() = default;
};
class DescribeFirstRankResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeFirstRankResponseBody> body{};

  DescribeFirstRankResponse() {}

  explicit DescribeFirstRankResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeFirstRankResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeFirstRankResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeFirstRankResponse() = default;
};
class DescribeInterventionDictionaryResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> analyzer{};
  shared_ptr<string> created{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> updated{};

  DescribeInterventionDictionaryResponseBodyResult() {}

  explicit DescribeInterventionDictionaryResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (analyzer) {
      res["analyzer"] = boost::any(*analyzer);
    }
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("analyzer") != m.end() && !m["analyzer"].empty()) {
      analyzer = make_shared<string>(boost::any_cast<string>(m["analyzer"]));
    }
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<string>(boost::any_cast<string>(m["created"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<string>(boost::any_cast<string>(m["updated"]));
    }
  }


  virtual ~DescribeInterventionDictionaryResponseBodyResult() = default;
};
class DescribeInterventionDictionaryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeInterventionDictionaryResponseBodyResult> result{};

  DescribeInterventionDictionaryResponseBody() {}

  explicit DescribeInterventionDictionaryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        DescribeInterventionDictionaryResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<DescribeInterventionDictionaryResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DescribeInterventionDictionaryResponseBody() = default;
};
class DescribeInterventionDictionaryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeInterventionDictionaryResponseBody> body{};

  DescribeInterventionDictionaryResponse() {}

  explicit DescribeInterventionDictionaryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeInterventionDictionaryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInterventionDictionaryResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInterventionDictionaryResponse() = default;
};
class DescribeQueryProcessorResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<long> created{};
  shared_ptr<string> domain{};
  shared_ptr<vector<string>> indexes{};
  shared_ptr<string> name{};
  shared_ptr<vector<map<string, boost::any>>> processors{};
  shared_ptr<long> updated{};

  DescribeQueryProcessorResponseBodyResult() {}

  explicit DescribeQueryProcessorResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["active"] = boost::any(*active);
    }
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    if (indexes) {
      res["indexes"] = boost::any(*indexes);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (processors) {
      res["processors"] = boost::any(*processors);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("active") != m.end() && !m["active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["active"]));
    }
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<long>(boost::any_cast<long>(m["created"]));
    }
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
    if (m.find("indexes") != m.end() && !m["indexes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["indexes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["indexes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      indexes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("processors") != m.end() && !m["processors"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["processors"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["processors"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      processors = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<long>(boost::any_cast<long>(m["updated"]));
    }
  }


  virtual ~DescribeQueryProcessorResponseBodyResult() = default;
};
class DescribeQueryProcessorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeQueryProcessorResponseBodyResult> result{};

  DescribeQueryProcessorResponseBody() {}

  explicit DescribeQueryProcessorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        DescribeQueryProcessorResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<DescribeQueryProcessorResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DescribeQueryProcessorResponseBody() = default;
};
class DescribeQueryProcessorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeQueryProcessorResponseBody> body{};

  DescribeQueryProcessorResponse() {}

  explicit DescribeQueryProcessorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeQueryProcessorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeQueryProcessorResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeQueryProcessorResponse() = default;
};
class DescribeRegionResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> config{};
  shared_ptr<string> regionId{};

  DescribeRegionResponseBodyResult() {}

  explicit DescribeRegionResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["config"] = boost::any(*config);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("config") != m.end() && !m["config"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["config"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      config = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
  }


  virtual ~DescribeRegionResponseBodyResult() = default;
};
class DescribeRegionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeRegionResponseBodyResult> result{};

  DescribeRegionResponseBody() {}

  explicit DescribeRegionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        DescribeRegionResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<DescribeRegionResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DescribeRegionResponseBody() = default;
};
class DescribeRegionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRegionResponseBody> body{};

  DescribeRegionResponse() {}

  explicit DescribeRegionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeRegionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRegionResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRegionResponse() = default;
};
class DescribeRegionsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> consoleUrl{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> localName{};
  shared_ptr<string> regionId{};

  DescribeRegionsResponseBodyResult() {}

  explicit DescribeRegionsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consoleUrl) {
      res["consoleUrl"] = boost::any(*consoleUrl);
    }
    if (endpoint) {
      res["endpoint"] = boost::any(*endpoint);
    }
    if (localName) {
      res["localName"] = boost::any(*localName);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("consoleUrl") != m.end() && !m["consoleUrl"].empty()) {
      consoleUrl = make_shared<string>(boost::any_cast<string>(m["consoleUrl"]));
    }
    if (m.find("endpoint") != m.end() && !m["endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["endpoint"]));
    }
    if (m.find("localName") != m.end() && !m["localName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["localName"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
  }


  virtual ~DescribeRegionsResponseBodyResult() = default;
};
class DescribeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeRegionsResponseBodyResult>> result{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<DescribeRegionsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<DescribeRegionsResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBody() = default;
};
class DescribeRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRegionsResponseBody> body{};

  DescribeRegionsResponse() {}

  explicit DescribeRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponse() = default;
};
class DescribeScheduledTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  DescribeScheduledTaskResponseBody() {}

  explicit DescribeScheduledTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~DescribeScheduledTaskResponseBody() = default;
};
class DescribeScheduledTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeScheduledTaskResponseBody> body{};

  DescribeScheduledTaskResponse() {}

  explicit DescribeScheduledTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeScheduledTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScheduledTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScheduledTaskResponse() = default;
};
class DescribeSecondRankResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<long> created{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> isDefault{};
  shared_ptr<string> isSys{};
  shared_ptr<string> meta{};
  shared_ptr<string> name{};
  shared_ptr<long> updated{};

  DescribeSecondRankResponseBodyResult() {}

  explicit DescribeSecondRankResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["active"] = boost::any(*active);
    }
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (isDefault) {
      res["isDefault"] = boost::any(*isDefault);
    }
    if (isSys) {
      res["isSys"] = boost::any(*isSys);
    }
    if (meta) {
      res["meta"] = boost::any(*meta);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("active") != m.end() && !m["active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["active"]));
    }
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<long>(boost::any_cast<long>(m["created"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("isDefault") != m.end() && !m["isDefault"].empty()) {
      isDefault = make_shared<string>(boost::any_cast<string>(m["isDefault"]));
    }
    if (m.find("isSys") != m.end() && !m["isSys"].empty()) {
      isSys = make_shared<string>(boost::any_cast<string>(m["isSys"]));
    }
    if (m.find("meta") != m.end() && !m["meta"].empty()) {
      meta = make_shared<string>(boost::any_cast<string>(m["meta"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<long>(boost::any_cast<long>(m["updated"]));
    }
  }


  virtual ~DescribeSecondRankResponseBodyResult() = default;
};
class DescribeSecondRankResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeSecondRankResponseBodyResult> result{};

  DescribeSecondRankResponseBody() {}

  explicit DescribeSecondRankResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        DescribeSecondRankResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<DescribeSecondRankResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DescribeSecondRankResponseBody() = default;
};
class DescribeSecondRankResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSecondRankResponseBody> body{};

  DescribeSecondRankResponse() {}

  explicit DescribeSecondRankResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeSecondRankResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSecondRankResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSecondRankResponse() = default;
};
class DescribeSlowQueryStatusResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> appGroupId{};
  shared_ptr<string> region{};
  shared_ptr<string> status{};

  DescribeSlowQueryStatusResponseBodyResult() {}

  explicit DescribeSlowQueryStatusResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appGroupId) {
      res["appGroupId"] = boost::any(*appGroupId);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appGroupId") != m.end() && !m["appGroupId"].empty()) {
      appGroupId = make_shared<string>(boost::any_cast<string>(m["appGroupId"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~DescribeSlowQueryStatusResponseBodyResult() = default;
};
class DescribeSlowQueryStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeSlowQueryStatusResponseBodyResult> result{};

  DescribeSlowQueryStatusResponseBody() {}

  explicit DescribeSlowQueryStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        DescribeSlowQueryStatusResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<DescribeSlowQueryStatusResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DescribeSlowQueryStatusResponseBody() = default;
};
class DescribeSlowQueryStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSlowQueryStatusResponseBody> body{};

  DescribeSlowQueryStatusResponse() {}

  explicit DescribeSlowQueryStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeSlowQueryStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSlowQueryStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSlowQueryStatusResponse() = default;
};
class DescribeUserAnalyzerRequest : public Darabonba::Model {
public:
  shared_ptr<string> with{};

  DescribeUserAnalyzerRequest() {}

  explicit DescribeUserAnalyzerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (with) {
      res["with"] = boost::any(*with);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("with") != m.end() && !m["with"].empty()) {
      with = make_shared<string>(boost::any_cast<string>(m["with"]));
    }
  }


  virtual ~DescribeUserAnalyzerRequest() = default;
};
class DescribeUserAnalyzerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  DescribeUserAnalyzerResponseBody() {}

  explicit DescribeUserAnalyzerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~DescribeUserAnalyzerResponseBody() = default;
};
class DescribeUserAnalyzerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeUserAnalyzerResponseBody> body{};

  DescribeUserAnalyzerResponse() {}

  explicit DescribeUserAnalyzerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeUserAnalyzerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUserAnalyzerResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUserAnalyzerResponse() = default;
};
class DisableSlowQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  DisableSlowQueryResponseBody() {}

  explicit DisableSlowQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~DisableSlowQueryResponseBody() = default;
};
class DisableSlowQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableSlowQueryResponseBody> body{};

  DisableSlowQueryResponse() {}

  explicit DisableSlowQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DisableSlowQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableSlowQueryResponseBody>(model1);
      }
    }
  }


  virtual ~DisableSlowQueryResponse() = default;
};
class EnableSlowQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  EnableSlowQueryResponseBody() {}

  explicit EnableSlowQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~EnableSlowQueryResponseBody() = default;
};
class EnableSlowQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableSlowQueryResponseBody> body{};

  EnableSlowQueryResponse() {}

  explicit EnableSlowQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EnableSlowQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableSlowQueryResponseBody>(model1);
      }
    }
  }


  virtual ~EnableSlowQueryResponse() = default;
};
class GenerateMergedTableRequest : public Darabonba::Model {
public:
  shared_ptr<Schema> body{};
  shared_ptr<string> spec{};

  GenerateMergedTableRequest() {}

  explicit GenerateMergedTableRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (spec) {
      res["spec"] = boost::any(*spec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Schema model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Schema>(model1);
      }
    }
    if (m.find("spec") != m.end() && !m["spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["spec"]));
    }
  }


  virtual ~GenerateMergedTableRequest() = default;
};
class GenerateMergedTableResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> fromTable{};
  shared_ptr<map<string, boost::any>> mergeTable{};
  shared_ptr<string> primaryKey{};

  GenerateMergedTableResponseBodyResult() {}

  explicit GenerateMergedTableResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fromTable) {
      res["fromTable"] = boost::any(*fromTable);
    }
    if (mergeTable) {
      res["mergeTable"] = boost::any(*mergeTable);
    }
    if (primaryKey) {
      res["primaryKey"] = boost::any(*primaryKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fromTable") != m.end() && !m["fromTable"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["fromTable"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      fromTable = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("mergeTable") != m.end() && !m["mergeTable"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["mergeTable"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      mergeTable = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("primaryKey") != m.end() && !m["primaryKey"].empty()) {
      primaryKey = make_shared<string>(boost::any_cast<string>(m["primaryKey"]));
    }
  }


  virtual ~GenerateMergedTableResponseBodyResult() = default;
};
class GenerateMergedTableResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GenerateMergedTableResponseBodyResult> result{};

  GenerateMergedTableResponseBody() {}

  explicit GenerateMergedTableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        GenerateMergedTableResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<GenerateMergedTableResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GenerateMergedTableResponseBody() = default;
};
class GenerateMergedTableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateMergedTableResponseBody> body{};

  GenerateMergedTableResponse() {}

  explicit GenerateMergedTableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GenerateMergedTableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateMergedTableResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateMergedTableResponse() = default;
};
class GetDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> appGroupIdentity{};

  GetDomainRequest() {}

  explicit GetDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appGroupIdentity) {
      res["appGroupIdentity"] = boost::any(*appGroupIdentity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appGroupIdentity") != m.end() && !m["appGroupIdentity"].empty()) {
      appGroupIdentity = make_shared<string>(boost::any_cast<string>(m["appGroupIdentity"]));
    }
  }


  virtual ~GetDomainRequest() = default;
};
class GetDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  GetDomainResponseBody() {}

  explicit GetDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~GetDomainResponseBody() = default;
};
class GetDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDomainResponseBody> body{};

  GetDomainResponse() {}

  explicit GetDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDomainResponseBody>(model1);
      }
    }
  }


  virtual ~GetDomainResponse() = default;
};
class GetFunctionCurrentVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> domain{};
  shared_ptr<string> functionType{};
  shared_ptr<string> modelType{};

  GetFunctionCurrentVersionRequest() {}

  explicit GetFunctionCurrentVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    if (functionType) {
      res["functionType"] = boost::any(*functionType);
    }
    if (modelType) {
      res["modelType"] = boost::any(*modelType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
    if (m.find("functionType") != m.end() && !m["functionType"].empty()) {
      functionType = make_shared<string>(boost::any_cast<string>(m["functionType"]));
    }
    if (m.find("modelType") != m.end() && !m["modelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["modelType"]));
    }
  }


  virtual ~GetFunctionCurrentVersionRequest() = default;
};
class GetFunctionCurrentVersionResponseBodyResultVersionConfigCreateParameters : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> required{};

  GetFunctionCurrentVersionResponseBodyResultVersionConfigCreateParameters() {}

  explicit GetFunctionCurrentVersionResponseBodyResultVersionConfigCreateParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (required) {
      res["Required"] = boost::any(*required);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<string>(boost::any_cast<string>(m["Required"]));
    }
  }


  virtual ~GetFunctionCurrentVersionResponseBodyResultVersionConfigCreateParameters() = default;
};
class GetFunctionCurrentVersionResponseBodyResultVersionConfigDepends : public Darabonba::Model {
public:
  shared_ptr<string> condition{};
  shared_ptr<string> dependency{};
  shared_ptr<string> description{};

  GetFunctionCurrentVersionResponseBodyResultVersionConfigDepends() {}

  explicit GetFunctionCurrentVersionResponseBodyResultVersionConfigDepends(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (condition) {
      res["Condition"] = boost::any(*condition);
    }
    if (dependency) {
      res["Dependency"] = boost::any(*dependency);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Condition") != m.end() && !m["Condition"].empty()) {
      condition = make_shared<string>(boost::any_cast<string>(m["Condition"]));
    }
    if (m.find("Dependency") != m.end() && !m["Dependency"].empty()) {
      dependency = make_shared<string>(boost::any_cast<string>(m["Dependency"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~GetFunctionCurrentVersionResponseBodyResultVersionConfigDepends() = default;
};
class GetFunctionCurrentVersionResponseBodyResultVersionConfigUsageParameters : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> required{};

  GetFunctionCurrentVersionResponseBodyResultVersionConfigUsageParameters() {}

  explicit GetFunctionCurrentVersionResponseBodyResultVersionConfigUsageParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (required) {
      res["Required"] = boost::any(*required);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<string>(boost::any_cast<string>(m["Required"]));
    }
  }


  virtual ~GetFunctionCurrentVersionResponseBodyResultVersionConfigUsageParameters() = default;
};
class GetFunctionCurrentVersionResponseBodyResultVersionConfig : public Darabonba::Model {
public:
  shared_ptr<vector<GetFunctionCurrentVersionResponseBodyResultVersionConfigCreateParameters>> createParameters{};
  shared_ptr<vector<GetFunctionCurrentVersionResponseBodyResultVersionConfigDepends>> depends{};
  shared_ptr<vector<GetFunctionCurrentVersionResponseBodyResultVersionConfigUsageParameters>> usageParameters{};

  GetFunctionCurrentVersionResponseBodyResultVersionConfig() {}

  explicit GetFunctionCurrentVersionResponseBodyResultVersionConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createParameters) {
      vector<boost::any> temp1;
      for(auto item1:*createParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CreateParameters"] = boost::any(temp1);
    }
    if (depends) {
      vector<boost::any> temp1;
      for(auto item1:*depends){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Depends"] = boost::any(temp1);
    }
    if (usageParameters) {
      vector<boost::any> temp1;
      for(auto item1:*usageParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UsageParameters"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateParameters") != m.end() && !m["CreateParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["CreateParameters"].type()) {
        vector<GetFunctionCurrentVersionResponseBodyResultVersionConfigCreateParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CreateParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetFunctionCurrentVersionResponseBodyResultVersionConfigCreateParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        createParameters = make_shared<vector<GetFunctionCurrentVersionResponseBodyResultVersionConfigCreateParameters>>(expect1);
      }
    }
    if (m.find("Depends") != m.end() && !m["Depends"].empty()) {
      if (typeid(vector<boost::any>) == m["Depends"].type()) {
        vector<GetFunctionCurrentVersionResponseBodyResultVersionConfigDepends> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Depends"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetFunctionCurrentVersionResponseBodyResultVersionConfigDepends model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        depends = make_shared<vector<GetFunctionCurrentVersionResponseBodyResultVersionConfigDepends>>(expect1);
      }
    }
    if (m.find("UsageParameters") != m.end() && !m["UsageParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["UsageParameters"].type()) {
        vector<GetFunctionCurrentVersionResponseBodyResultVersionConfigUsageParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UsageParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetFunctionCurrentVersionResponseBodyResultVersionConfigUsageParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        usageParameters = make_shared<vector<GetFunctionCurrentVersionResponseBodyResultVersionConfigUsageParameters>>(expect1);
      }
    }
  }


  virtual ~GetFunctionCurrentVersionResponseBodyResultVersionConfig() = default;
};
class GetFunctionCurrentVersionResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> functionName{};
  shared_ptr<string> functionType{};
  shared_ptr<string> modelType{};
  shared_ptr<GetFunctionCurrentVersionResponseBodyResultVersionConfig> versionConfig{};
  shared_ptr<long> versionId{};
  shared_ptr<string> versionName{};

  GetFunctionCurrentVersionResponseBodyResult() {}

  explicit GetFunctionCurrentVersionResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (functionName) {
      res["FunctionName"] = boost::any(*functionName);
    }
    if (functionType) {
      res["FunctionType"] = boost::any(*functionType);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (versionConfig) {
      res["VersionConfig"] = versionConfig ? boost::any(versionConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FunctionName") != m.end() && !m["FunctionName"].empty()) {
      functionName = make_shared<string>(boost::any_cast<string>(m["FunctionName"]));
    }
    if (m.find("FunctionType") != m.end() && !m["FunctionType"].empty()) {
      functionType = make_shared<string>(boost::any_cast<string>(m["FunctionType"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("VersionConfig") != m.end() && !m["VersionConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["VersionConfig"].type()) {
        GetFunctionCurrentVersionResponseBodyResultVersionConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VersionConfig"]));
        versionConfig = make_shared<GetFunctionCurrentVersionResponseBodyResultVersionConfig>(model1);
      }
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<long>(boost::any_cast<long>(m["VersionId"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~GetFunctionCurrentVersionResponseBodyResult() = default;
};
class GetFunctionCurrentVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpCode{};
  shared_ptr<long> latency{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetFunctionCurrentVersionResponseBodyResult> result{};
  shared_ptr<string> status{};

  GetFunctionCurrentVersionResponseBody() {}

  explicit GetFunctionCurrentVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (latency) {
      res["Latency"] = boost::any(*latency);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["HttpCode"]));
    }
    if (m.find("Latency") != m.end() && !m["Latency"].empty()) {
      latency = make_shared<long>(boost::any_cast<long>(m["Latency"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetFunctionCurrentVersionResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetFunctionCurrentVersionResponseBodyResult>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetFunctionCurrentVersionResponseBody() = default;
};
class GetFunctionCurrentVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFunctionCurrentVersionResponseBody> body{};

  GetFunctionCurrentVersionResponse() {}

  explicit GetFunctionCurrentVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetFunctionCurrentVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFunctionCurrentVersionResponseBody>(model1);
      }
    }
  }


  virtual ~GetFunctionCurrentVersionResponse() = default;
};
class GetFunctionDefaultInstanceResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> instanceName{};

  GetFunctionDefaultInstanceResponseBodyResult() {}

  explicit GetFunctionDefaultInstanceResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
  }


  virtual ~GetFunctionDefaultInstanceResponseBodyResult() = default;
};
class GetFunctionDefaultInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> functionName{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> instanceName{};
  shared_ptr<long> latency{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetFunctionDefaultInstanceResponseBodyResult> result{};
  shared_ptr<string> status{};

  GetFunctionDefaultInstanceResponseBody() {}

  explicit GetFunctionDefaultInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (functionName) {
      res["FunctionName"] = boost::any(*functionName);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (latency) {
      res["Latency"] = boost::any(*latency);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("FunctionName") != m.end() && !m["FunctionName"].empty()) {
      functionName = make_shared<string>(boost::any_cast<string>(m["FunctionName"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["HttpCode"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("Latency") != m.end() && !m["Latency"].empty()) {
      latency = make_shared<long>(boost::any_cast<long>(m["Latency"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetFunctionDefaultInstanceResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetFunctionDefaultInstanceResponseBodyResult>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetFunctionDefaultInstanceResponseBody() = default;
};
class GetFunctionDefaultInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFunctionDefaultInstanceResponseBody> body{};

  GetFunctionDefaultInstanceResponse() {}

  explicit GetFunctionDefaultInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetFunctionDefaultInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFunctionDefaultInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~GetFunctionDefaultInstanceResponse() = default;
};
class GetFunctionInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> output{};

  GetFunctionInstanceRequest() {}

  explicit GetFunctionInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (output) {
      res["output"] = boost::any(*output);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("output") != m.end() && !m["output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["output"]));
    }
  }


  virtual ~GetFunctionInstanceRequest() = default;
};
class GetFunctionInstanceResponseBodyResultBelongs : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> domain{};
  shared_ptr<string> language{};

  GetFunctionInstanceResponseBodyResultBelongs() {}

  explicit GetFunctionInstanceResponseBodyResultBelongs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
  }


  virtual ~GetFunctionInstanceResponseBodyResultBelongs() = default;
};
class GetFunctionInstanceResponseBodyResultCreateParameters : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  GetFunctionInstanceResponseBodyResultCreateParameters() {}

  explicit GetFunctionInstanceResponseBodyResultCreateParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetFunctionInstanceResponseBodyResultCreateParameters() = default;
};
class GetFunctionInstanceResponseBodyResultTask : public Darabonba::Model {
public:
  shared_ptr<string> dagStatus{};
  shared_ptr<long> lastRunTime{};

  GetFunctionInstanceResponseBodyResultTask() {}

  explicit GetFunctionInstanceResponseBodyResultTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dagStatus) {
      res["DagStatus"] = boost::any(*dagStatus);
    }
    if (lastRunTime) {
      res["LastRunTime"] = boost::any(*lastRunTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DagStatus") != m.end() && !m["DagStatus"].empty()) {
      dagStatus = make_shared<string>(boost::any_cast<string>(m["DagStatus"]));
    }
    if (m.find("LastRunTime") != m.end() && !m["LastRunTime"].empty()) {
      lastRunTime = make_shared<long>(boost::any_cast<long>(m["LastRunTime"]));
    }
  }


  virtual ~GetFunctionInstanceResponseBodyResultTask() = default;
};
class GetFunctionInstanceResponseBodyResultUsageParameters : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  GetFunctionInstanceResponseBodyResultUsageParameters() {}

  explicit GetFunctionInstanceResponseBodyResultUsageParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetFunctionInstanceResponseBodyResultUsageParameters() = default;
};
class GetFunctionInstanceResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<GetFunctionInstanceResponseBodyResultBelongs> belongs{};
  shared_ptr<vector<GetFunctionInstanceResponseBodyResultCreateParameters>> createParameters{};
  shared_ptr<long> createTime{};
  shared_ptr<string> cron{};
  shared_ptr<string> description{};
  shared_ptr<string> extendInfo{};
  shared_ptr<string> functionName{};
  shared_ptr<string> functionType{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> modelType{};
  shared_ptr<string> source{};
  shared_ptr<string> status{};
  shared_ptr<GetFunctionInstanceResponseBodyResultTask> task{};
  shared_ptr<vector<GetFunctionInstanceResponseBodyResultUsageParameters>> usageParameters{};
  shared_ptr<long> versionId{};

  GetFunctionInstanceResponseBodyResult() {}

  explicit GetFunctionInstanceResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (belongs) {
      res["Belongs"] = belongs ? boost::any(belongs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createParameters) {
      vector<boost::any> temp1;
      for(auto item1:*createParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CreateParameters"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (cron) {
      res["Cron"] = boost::any(*cron);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (extendInfo) {
      res["ExtendInfo"] = boost::any(*extendInfo);
    }
    if (functionName) {
      res["FunctionName"] = boost::any(*functionName);
    }
    if (functionType) {
      res["FunctionType"] = boost::any(*functionType);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (task) {
      res["Task"] = task ? boost::any(task->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (usageParameters) {
      vector<boost::any> temp1;
      for(auto item1:*usageParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UsageParameters"] = boost::any(temp1);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Belongs") != m.end() && !m["Belongs"].empty()) {
      if (typeid(map<string, boost::any>) == m["Belongs"].type()) {
        GetFunctionInstanceResponseBodyResultBelongs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Belongs"]));
        belongs = make_shared<GetFunctionInstanceResponseBodyResultBelongs>(model1);
      }
    }
    if (m.find("CreateParameters") != m.end() && !m["CreateParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["CreateParameters"].type()) {
        vector<GetFunctionInstanceResponseBodyResultCreateParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CreateParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetFunctionInstanceResponseBodyResultCreateParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        createParameters = make_shared<vector<GetFunctionInstanceResponseBodyResultCreateParameters>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Cron") != m.end() && !m["Cron"].empty()) {
      cron = make_shared<string>(boost::any_cast<string>(m["Cron"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExtendInfo") != m.end() && !m["ExtendInfo"].empty()) {
      extendInfo = make_shared<string>(boost::any_cast<string>(m["ExtendInfo"]));
    }
    if (m.find("FunctionName") != m.end() && !m["FunctionName"].empty()) {
      functionName = make_shared<string>(boost::any_cast<string>(m["FunctionName"]));
    }
    if (m.find("FunctionType") != m.end() && !m["FunctionType"].empty()) {
      functionType = make_shared<string>(boost::any_cast<string>(m["FunctionType"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Task") != m.end() && !m["Task"].empty()) {
      if (typeid(map<string, boost::any>) == m["Task"].type()) {
        GetFunctionInstanceResponseBodyResultTask model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Task"]));
        task = make_shared<GetFunctionInstanceResponseBodyResultTask>(model1);
      }
    }
    if (m.find("UsageParameters") != m.end() && !m["UsageParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["UsageParameters"].type()) {
        vector<GetFunctionInstanceResponseBodyResultUsageParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UsageParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetFunctionInstanceResponseBodyResultUsageParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        usageParameters = make_shared<vector<GetFunctionInstanceResponseBodyResultUsageParameters>>(expect1);
      }
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<long>(boost::any_cast<long>(m["VersionId"]));
    }
  }


  virtual ~GetFunctionInstanceResponseBodyResult() = default;
};
class GetFunctionInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpCode{};
  shared_ptr<long> latency{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetFunctionInstanceResponseBodyResult> result{};
  shared_ptr<string> status{};

  GetFunctionInstanceResponseBody() {}

  explicit GetFunctionInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (latency) {
      res["Latency"] = boost::any(*latency);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["HttpCode"]));
    }
    if (m.find("Latency") != m.end() && !m["Latency"].empty()) {
      latency = make_shared<long>(boost::any_cast<long>(m["Latency"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetFunctionInstanceResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetFunctionInstanceResponseBodyResult>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetFunctionInstanceResponseBody() = default;
};
class GetFunctionInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFunctionInstanceResponseBody> body{};

  GetFunctionInstanceResponse() {}

  explicit GetFunctionInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetFunctionInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFunctionInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~GetFunctionInstanceResponse() = default;
};
class GetFunctionTaskResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> extendInfo{};
  shared_ptr<string> functionName{};
  shared_ptr<string> generation{};
  shared_ptr<long> progress{};
  shared_ptr<string> runId{};
  shared_ptr<long> startTime{};
  shared_ptr<string> status{};

  GetFunctionTaskResponseBodyResult() {}

  explicit GetFunctionTaskResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (extendInfo) {
      res["ExtendInfo"] = boost::any(*extendInfo);
    }
    if (functionName) {
      res["FunctionName"] = boost::any(*functionName);
    }
    if (generation) {
      res["Generation"] = boost::any(*generation);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (runId) {
      res["RunId"] = boost::any(*runId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("ExtendInfo") != m.end() && !m["ExtendInfo"].empty()) {
      extendInfo = make_shared<string>(boost::any_cast<string>(m["ExtendInfo"]));
    }
    if (m.find("FunctionName") != m.end() && !m["FunctionName"].empty()) {
      functionName = make_shared<string>(boost::any_cast<string>(m["FunctionName"]));
    }
    if (m.find("Generation") != m.end() && !m["Generation"].empty()) {
      generation = make_shared<string>(boost::any_cast<string>(m["Generation"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("RunId") != m.end() && !m["RunId"].empty()) {
      runId = make_shared<string>(boost::any_cast<string>(m["RunId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetFunctionTaskResponseBodyResult() = default;
};
class GetFunctionTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpCode{};
  shared_ptr<long> latency{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetFunctionTaskResponseBodyResult> result{};
  shared_ptr<string> status{};

  GetFunctionTaskResponseBody() {}

  explicit GetFunctionTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (latency) {
      res["Latency"] = boost::any(*latency);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["HttpCode"]));
    }
    if (m.find("Latency") != m.end() && !m["Latency"].empty()) {
      latency = make_shared<long>(boost::any_cast<long>(m["Latency"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetFunctionTaskResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetFunctionTaskResponseBodyResult>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetFunctionTaskResponseBody() = default;
};
class GetFunctionTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFunctionTaskResponseBody> body{};

  GetFunctionTaskResponse() {}

  explicit GetFunctionTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetFunctionTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFunctionTaskResponseBody>(model1);
      }
    }
  }


  virtual ~GetFunctionTaskResponse() = default;
};
class GetFunctionVersionResponseBodyResultVersionConfigCreateParameters : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> required{};

  GetFunctionVersionResponseBodyResultVersionConfigCreateParameters() {}

  explicit GetFunctionVersionResponseBodyResultVersionConfigCreateParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (required) {
      res["Required"] = boost::any(*required);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<string>(boost::any_cast<string>(m["Required"]));
    }
  }


  virtual ~GetFunctionVersionResponseBodyResultVersionConfigCreateParameters() = default;
};
class GetFunctionVersionResponseBodyResultVersionConfigDepends : public Darabonba::Model {
public:
  shared_ptr<string> condition{};
  shared_ptr<string> dependency{};
  shared_ptr<string> description{};

  GetFunctionVersionResponseBodyResultVersionConfigDepends() {}

  explicit GetFunctionVersionResponseBodyResultVersionConfigDepends(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (condition) {
      res["Condition"] = boost::any(*condition);
    }
    if (dependency) {
      res["Dependency"] = boost::any(*dependency);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Condition") != m.end() && !m["Condition"].empty()) {
      condition = make_shared<string>(boost::any_cast<string>(m["Condition"]));
    }
    if (m.find("Dependency") != m.end() && !m["Dependency"].empty()) {
      dependency = make_shared<string>(boost::any_cast<string>(m["Dependency"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~GetFunctionVersionResponseBodyResultVersionConfigDepends() = default;
};
class GetFunctionVersionResponseBodyResultVersionConfigUsageParameters : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> required{};

  GetFunctionVersionResponseBodyResultVersionConfigUsageParameters() {}

  explicit GetFunctionVersionResponseBodyResultVersionConfigUsageParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (required) {
      res["Required"] = boost::any(*required);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<string>(boost::any_cast<string>(m["Required"]));
    }
  }


  virtual ~GetFunctionVersionResponseBodyResultVersionConfigUsageParameters() = default;
};
class GetFunctionVersionResponseBodyResultVersionConfig : public Darabonba::Model {
public:
  shared_ptr<vector<GetFunctionVersionResponseBodyResultVersionConfigCreateParameters>> createParameters{};
  shared_ptr<vector<GetFunctionVersionResponseBodyResultVersionConfigDepends>> depends{};
  shared_ptr<vector<GetFunctionVersionResponseBodyResultVersionConfigUsageParameters>> usageParameters{};

  GetFunctionVersionResponseBodyResultVersionConfig() {}

  explicit GetFunctionVersionResponseBodyResultVersionConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createParameters) {
      vector<boost::any> temp1;
      for(auto item1:*createParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CreateParameters"] = boost::any(temp1);
    }
    if (depends) {
      vector<boost::any> temp1;
      for(auto item1:*depends){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Depends"] = boost::any(temp1);
    }
    if (usageParameters) {
      vector<boost::any> temp1;
      for(auto item1:*usageParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UsageParameters"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateParameters") != m.end() && !m["CreateParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["CreateParameters"].type()) {
        vector<GetFunctionVersionResponseBodyResultVersionConfigCreateParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CreateParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetFunctionVersionResponseBodyResultVersionConfigCreateParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        createParameters = make_shared<vector<GetFunctionVersionResponseBodyResultVersionConfigCreateParameters>>(expect1);
      }
    }
    if (m.find("Depends") != m.end() && !m["Depends"].empty()) {
      if (typeid(vector<boost::any>) == m["Depends"].type()) {
        vector<GetFunctionVersionResponseBodyResultVersionConfigDepends> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Depends"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetFunctionVersionResponseBodyResultVersionConfigDepends model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        depends = make_shared<vector<GetFunctionVersionResponseBodyResultVersionConfigDepends>>(expect1);
      }
    }
    if (m.find("UsageParameters") != m.end() && !m["UsageParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["UsageParameters"].type()) {
        vector<GetFunctionVersionResponseBodyResultVersionConfigUsageParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UsageParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetFunctionVersionResponseBodyResultVersionConfigUsageParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        usageParameters = make_shared<vector<GetFunctionVersionResponseBodyResultVersionConfigUsageParameters>>(expect1);
      }
    }
  }


  virtual ~GetFunctionVersionResponseBodyResultVersionConfig() = default;
};
class GetFunctionVersionResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> functionName{};
  shared_ptr<string> functionType{};
  shared_ptr<string> modelType{};
  shared_ptr<GetFunctionVersionResponseBodyResultVersionConfig> versionConfig{};
  shared_ptr<long> versionId{};
  shared_ptr<string> versionName{};

  GetFunctionVersionResponseBodyResult() {}

  explicit GetFunctionVersionResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (functionName) {
      res["FunctionName"] = boost::any(*functionName);
    }
    if (functionType) {
      res["FunctionType"] = boost::any(*functionType);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (versionConfig) {
      res["VersionConfig"] = versionConfig ? boost::any(versionConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FunctionName") != m.end() && !m["FunctionName"].empty()) {
      functionName = make_shared<string>(boost::any_cast<string>(m["FunctionName"]));
    }
    if (m.find("FunctionType") != m.end() && !m["FunctionType"].empty()) {
      functionType = make_shared<string>(boost::any_cast<string>(m["FunctionType"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("VersionConfig") != m.end() && !m["VersionConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["VersionConfig"].type()) {
        GetFunctionVersionResponseBodyResultVersionConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VersionConfig"]));
        versionConfig = make_shared<GetFunctionVersionResponseBodyResultVersionConfig>(model1);
      }
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<long>(boost::any_cast<long>(m["VersionId"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~GetFunctionVersionResponseBodyResult() = default;
};
class GetFunctionVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpCode{};
  shared_ptr<long> latency{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetFunctionVersionResponseBodyResult> result{};
  shared_ptr<string> status{};

  GetFunctionVersionResponseBody() {}

  explicit GetFunctionVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (latency) {
      res["Latency"] = boost::any(*latency);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["HttpCode"]));
    }
    if (m.find("Latency") != m.end() && !m["Latency"].empty()) {
      latency = make_shared<long>(boost::any_cast<long>(m["Latency"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetFunctionVersionResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetFunctionVersionResponseBodyResult>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetFunctionVersionResponseBody() = default;
};
class GetFunctionVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFunctionVersionResponseBody> body{};

  GetFunctionVersionResponse() {}

  explicit GetFunctionVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetFunctionVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFunctionVersionResponseBody>(model1);
      }
    }
  }


  virtual ~GetFunctionVersionResponse() = default;
};
class GetModelReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  GetModelReportResponseBody() {}

  explicit GetModelReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~GetModelReportResponseBody() = default;
};
class GetModelReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetModelReportResponseBody> body{};

  GetModelReportResponse() {}

  explicit GetModelReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetModelReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetModelReportResponseBody>(model1);
      }
    }
  }


  virtual ~GetModelReportResponse() = default;
};
class GetScriptFileNamesResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> fileName{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> pathName{};

  GetScriptFileNamesResponseBodyResult() {}

  explicit GetScriptFileNamesResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (modifyTime) {
      res["modifyTime"] = boost::any(*modifyTime);
    }
    if (pathName) {
      res["pathName"] = boost::any(*pathName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("modifyTime") != m.end() && !m["modifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["modifyTime"]));
    }
    if (m.find("pathName") != m.end() && !m["pathName"].empty()) {
      pathName = make_shared<string>(boost::any_cast<string>(m["pathName"]));
    }
  }


  virtual ~GetScriptFileNamesResponseBodyResult() = default;
};
class GetScriptFileNamesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetScriptFileNamesResponseBodyResult>> result{};

  GetScriptFileNamesResponseBody() {}

  explicit GetScriptFileNamesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<GetScriptFileNamesResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetScriptFileNamesResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<GetScriptFileNamesResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~GetScriptFileNamesResponseBody() = default;
};
class GetScriptFileNamesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetScriptFileNamesResponseBody> body{};

  GetScriptFileNamesResponse() {}

  explicit GetScriptFileNamesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetScriptFileNamesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetScriptFileNamesResponseBody>(model1);
      }
    }
  }


  virtual ~GetScriptFileNamesResponse() = default;
};
class GetSearchStrategyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  GetSearchStrategyResponseBody() {}

  explicit GetSearchStrategyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetSearchStrategyResponseBody() = default;
};
class GetSearchStrategyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSearchStrategyResponseBody> body{};

  GetSearchStrategyResponse() {}

  explicit GetSearchStrategyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSearchStrategyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSearchStrategyResponseBody>(model1);
      }
    }
  }


  virtual ~GetSearchStrategyResponse() = default;
};
class GetSortScriptResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> scope{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  GetSortScriptResponseBodyResult() {}

  explicit GetSortScriptResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (modifyTime) {
      res["modifyTime"] = boost::any(*modifyTime);
    }
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("modifyTime") != m.end() && !m["modifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["modifyTime"]));
    }
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["scope"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetSortScriptResponseBodyResult() = default;
};
class GetSortScriptResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetSortScriptResponseBodyResult> result{};

  GetSortScriptResponseBody() {}

  explicit GetSortScriptResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        GetSortScriptResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<GetSortScriptResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetSortScriptResponseBody() = default;
};
class GetSortScriptResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSortScriptResponseBody> body{};

  GetSortScriptResponse() {}

  explicit GetSortScriptResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSortScriptResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSortScriptResponseBody>(model1);
      }
    }
  }


  virtual ~GetSortScriptResponse() = default;
};
class GetSortScriptFileResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> createTime{};
  shared_ptr<string> modifyTime{};
  shared_ptr<long> version{};

  GetSortScriptFileResponseBodyResult() {}

  explicit GetSortScriptFileResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (modifyTime) {
      res["modifyTime"] = boost::any(*modifyTime);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("modifyTime") != m.end() && !m["modifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["modifyTime"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<long>(boost::any_cast<long>(m["version"]));
    }
  }


  virtual ~GetSortScriptFileResponseBodyResult() = default;
};
class GetSortScriptFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetSortScriptFileResponseBodyResult> result{};

  GetSortScriptFileResponseBody() {}

  explicit GetSortScriptFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        GetSortScriptFileResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<GetSortScriptFileResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetSortScriptFileResponseBody() = default;
};
class GetSortScriptFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSortScriptFileResponseBody> body{};

  GetSortScriptFileResponse() {}

  explicit GetSortScriptFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSortScriptFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSortScriptFileResponseBody>(model1);
      }
    }
  }


  virtual ~GetSortScriptFileResponse() = default;
};
class ListABTestExperimentsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> created{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<bool> online{};
  shared_ptr<map<string, boost::any>> params{};
  shared_ptr<long> traffic{};
  shared_ptr<long> updated{};

  ListABTestExperimentsResponseBodyResult() {}

  explicit ListABTestExperimentsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (online) {
      res["online"] = boost::any(*online);
    }
    if (params) {
      res["params"] = boost::any(*params);
    }
    if (traffic) {
      res["traffic"] = boost::any(*traffic);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<long>(boost::any_cast<long>(m["created"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("online") != m.end() && !m["online"].empty()) {
      online = make_shared<bool>(boost::any_cast<bool>(m["online"]));
    }
    if (m.find("params") != m.end() && !m["params"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["params"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      params = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("traffic") != m.end() && !m["traffic"].empty()) {
      traffic = make_shared<long>(boost::any_cast<long>(m["traffic"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<long>(boost::any_cast<long>(m["updated"]));
    }
  }


  virtual ~ListABTestExperimentsResponseBodyResult() = default;
};
class ListABTestExperimentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListABTestExperimentsResponseBodyResult>> result{};

  ListABTestExperimentsResponseBody() {}

  explicit ListABTestExperimentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListABTestExperimentsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListABTestExperimentsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListABTestExperimentsResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListABTestExperimentsResponseBody() = default;
};
class ListABTestExperimentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListABTestExperimentsResponseBody> body{};

  ListABTestExperimentsResponse() {}

  explicit ListABTestExperimentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListABTestExperimentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListABTestExperimentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListABTestExperimentsResponse() = default;
};
class ListABTestFixedFlowDividersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> result{};

  ListABTestFixedFlowDividersResponseBody() {}

  explicit ListABTestFixedFlowDividersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["result"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      result = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListABTestFixedFlowDividersResponseBody() = default;
};
class ListABTestFixedFlowDividersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListABTestFixedFlowDividersResponseBody> body{};

  ListABTestFixedFlowDividersResponse() {}

  explicit ListABTestFixedFlowDividersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListABTestFixedFlowDividersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListABTestFixedFlowDividersResponseBody>(model1);
      }
    }
  }


  virtual ~ListABTestFixedFlowDividersResponse() = default;
};
class ListABTestGroupsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> created{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<long> status{};
  shared_ptr<long> updated{};

  ListABTestGroupsResponseBodyResult() {}

  explicit ListABTestGroupsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<long>(boost::any_cast<long>(m["created"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<long>(boost::any_cast<long>(m["updated"]));
    }
  }


  virtual ~ListABTestGroupsResponseBodyResult() = default;
};
class ListABTestGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListABTestGroupsResponseBodyResult>> result{};

  ListABTestGroupsResponseBody() {}

  explicit ListABTestGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListABTestGroupsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListABTestGroupsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListABTestGroupsResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListABTestGroupsResponseBody() = default;
};
class ListABTestGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListABTestGroupsResponseBody> body{};

  ListABTestGroupsResponse() {}

  explicit ListABTestGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListABTestGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListABTestGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListABTestGroupsResponse() = default;
};
class ListABTestScenesResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> created{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<long> status{};
  shared_ptr<long> updated{};
  shared_ptr<vector<string>> values{};

  ListABTestScenesResponseBodyResult() {}

  explicit ListABTestScenesResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    if (values) {
      res["values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<long>(boost::any_cast<long>(m["created"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<long>(boost::any_cast<long>(m["updated"]));
    }
    if (m.find("values") != m.end() && !m["values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListABTestScenesResponseBodyResult() = default;
};
class ListABTestScenesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListABTestScenesResponseBodyResult>> result{};

  ListABTestScenesResponseBody() {}

  explicit ListABTestScenesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListABTestScenesResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListABTestScenesResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListABTestScenesResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListABTestScenesResponseBody() = default;
};
class ListABTestScenesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListABTestScenesResponseBody> body{};

  ListABTestScenesResponse() {}

  explicit ListABTestScenesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListABTestScenesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListABTestScenesResponseBody>(model1);
      }
    }
  }


  virtual ~ListABTestScenesResponse() = default;
};
class ListAppGroupsRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListAppGroupsRequestTags() {}

  explicit ListAppGroupsRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~ListAppGroupsRequestTags() = default;
};
class ListAppGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> name{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> sortBy{};
  shared_ptr<vector<ListAppGroupsRequestTags>> tags{};
  shared_ptr<string> type{};

  ListAppGroupsRequest() {}

  explicit ListAppGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sortBy) {
      res["sortBy"] = boost::any(*sortBy);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("sortBy") != m.end() && !m["sortBy"].empty()) {
      sortBy = make_shared<long>(boost::any_cast<long>(m["sortBy"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<ListAppGroupsRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAppGroupsRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListAppGroupsRequestTags>>(expect1);
      }
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListAppGroupsRequest() = default;
};
class ListAppGroupsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> name{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> sortBy{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<string> type{};

  ListAppGroupsShrinkRequest() {}

  explicit ListAppGroupsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sortBy) {
      res["sortBy"] = boost::any(*sortBy);
    }
    if (tagsShrink) {
      res["tags"] = boost::any(*tagsShrink);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("sortBy") != m.end() && !m["sortBy"].empty()) {
      sortBy = make_shared<long>(boost::any_cast<long>(m["sortBy"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["tags"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListAppGroupsShrinkRequest() = default;
};
class ListAppGroupsResponseBodyResultQuota : public Darabonba::Model {
public:
  shared_ptr<long> computeResource{};
  shared_ptr<long> docSize{};
  shared_ptr<string> spec{};

  ListAppGroupsResponseBodyResultQuota() {}

  explicit ListAppGroupsResponseBodyResultQuota(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (computeResource) {
      res["computeResource"] = boost::any(*computeResource);
    }
    if (docSize) {
      res["docSize"] = boost::any(*docSize);
    }
    if (spec) {
      res["spec"] = boost::any(*spec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("computeResource") != m.end() && !m["computeResource"].empty()) {
      computeResource = make_shared<long>(boost::any_cast<long>(m["computeResource"]));
    }
    if (m.find("docSize") != m.end() && !m["docSize"].empty()) {
      docSize = make_shared<long>(boost::any_cast<long>(m["docSize"]));
    }
    if (m.find("spec") != m.end() && !m["spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["spec"]));
    }
  }


  virtual ~ListAppGroupsResponseBodyResultQuota() = default;
};
class ListAppGroupsResponseBodyResultTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListAppGroupsResponseBodyResultTags() {}

  explicit ListAppGroupsResponseBodyResultTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~ListAppGroupsResponseBodyResultTags() = default;
};
class ListAppGroupsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<long> chargingWay{};
  shared_ptr<string> commodityCode{};
  shared_ptr<long> created{};
  shared_ptr<string> currentVersion{};
  shared_ptr<string> description{};
  shared_ptr<string> domain{};
  shared_ptr<string> expireOn{};
  shared_ptr<long> firstRankAlgoDeploymentId{};
  shared_ptr<long> hasPendingQuotaReviewTask{};
  shared_ptr<string> id{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> lockMode{};
  shared_ptr<long> lockedByExpiration{};
  shared_ptr<string> name{};
  shared_ptr<long> pendingSecondRankAlgoDeploymentId{};
  shared_ptr<string> processingOrderId{};
  shared_ptr<long> produced{};
  shared_ptr<string> projectId{};
  shared_ptr<ListAppGroupsResponseBodyResultQuota> quota{};
  shared_ptr<long> secondRankAlgoDeploymentId{};
  shared_ptr<string> status{};
  shared_ptr<long> switchedTime{};
  shared_ptr<vector<ListAppGroupsResponseBodyResultTags>> tags{};
  shared_ptr<string> type{};
  shared_ptr<long> updated{};

  ListAppGroupsResponseBodyResult() {}

  explicit ListAppGroupsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["chargeType"] = boost::any(*chargeType);
    }
    if (chargingWay) {
      res["chargingWay"] = boost::any(*chargingWay);
    }
    if (commodityCode) {
      res["commodityCode"] = boost::any(*commodityCode);
    }
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (currentVersion) {
      res["currentVersion"] = boost::any(*currentVersion);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    if (expireOn) {
      res["expireOn"] = boost::any(*expireOn);
    }
    if (firstRankAlgoDeploymentId) {
      res["firstRankAlgoDeploymentId"] = boost::any(*firstRankAlgoDeploymentId);
    }
    if (hasPendingQuotaReviewTask) {
      res["hasPendingQuotaReviewTask"] = boost::any(*hasPendingQuotaReviewTask);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (lockMode) {
      res["lockMode"] = boost::any(*lockMode);
    }
    if (lockedByExpiration) {
      res["lockedByExpiration"] = boost::any(*lockedByExpiration);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (pendingSecondRankAlgoDeploymentId) {
      res["pendingSecondRankAlgoDeploymentId"] = boost::any(*pendingSecondRankAlgoDeploymentId);
    }
    if (processingOrderId) {
      res["processingOrderId"] = boost::any(*processingOrderId);
    }
    if (produced) {
      res["produced"] = boost::any(*produced);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (quota) {
      res["quota"] = quota ? boost::any(quota->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (secondRankAlgoDeploymentId) {
      res["secondRankAlgoDeploymentId"] = boost::any(*secondRankAlgoDeploymentId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (switchedTime) {
      res["switchedTime"] = boost::any(*switchedTime);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chargeType") != m.end() && !m["chargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["chargeType"]));
    }
    if (m.find("chargingWay") != m.end() && !m["chargingWay"].empty()) {
      chargingWay = make_shared<long>(boost::any_cast<long>(m["chargingWay"]));
    }
    if (m.find("commodityCode") != m.end() && !m["commodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["commodityCode"]));
    }
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<long>(boost::any_cast<long>(m["created"]));
    }
    if (m.find("currentVersion") != m.end() && !m["currentVersion"].empty()) {
      currentVersion = make_shared<string>(boost::any_cast<string>(m["currentVersion"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
    if (m.find("expireOn") != m.end() && !m["expireOn"].empty()) {
      expireOn = make_shared<string>(boost::any_cast<string>(m["expireOn"]));
    }
    if (m.find("firstRankAlgoDeploymentId") != m.end() && !m["firstRankAlgoDeploymentId"].empty()) {
      firstRankAlgoDeploymentId = make_shared<long>(boost::any_cast<long>(m["firstRankAlgoDeploymentId"]));
    }
    if (m.find("hasPendingQuotaReviewTask") != m.end() && !m["hasPendingQuotaReviewTask"].empty()) {
      hasPendingQuotaReviewTask = make_shared<long>(boost::any_cast<long>(m["hasPendingQuotaReviewTask"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("lockMode") != m.end() && !m["lockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["lockMode"]));
    }
    if (m.find("lockedByExpiration") != m.end() && !m["lockedByExpiration"].empty()) {
      lockedByExpiration = make_shared<long>(boost::any_cast<long>(m["lockedByExpiration"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("pendingSecondRankAlgoDeploymentId") != m.end() && !m["pendingSecondRankAlgoDeploymentId"].empty()) {
      pendingSecondRankAlgoDeploymentId = make_shared<long>(boost::any_cast<long>(m["pendingSecondRankAlgoDeploymentId"]));
    }
    if (m.find("processingOrderId") != m.end() && !m["processingOrderId"].empty()) {
      processingOrderId = make_shared<string>(boost::any_cast<string>(m["processingOrderId"]));
    }
    if (m.find("produced") != m.end() && !m["produced"].empty()) {
      produced = make_shared<long>(boost::any_cast<long>(m["produced"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("quota") != m.end() && !m["quota"].empty()) {
      if (typeid(map<string, boost::any>) == m["quota"].type()) {
        ListAppGroupsResponseBodyResultQuota model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["quota"]));
        quota = make_shared<ListAppGroupsResponseBodyResultQuota>(model1);
      }
    }
    if (m.find("secondRankAlgoDeploymentId") != m.end() && !m["secondRankAlgoDeploymentId"].empty()) {
      secondRankAlgoDeploymentId = make_shared<long>(boost::any_cast<long>(m["secondRankAlgoDeploymentId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("switchedTime") != m.end() && !m["switchedTime"].empty()) {
      switchedTime = make_shared<long>(boost::any_cast<long>(m["switchedTime"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<ListAppGroupsResponseBodyResultTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAppGroupsResponseBodyResultTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListAppGroupsResponseBodyResultTags>>(expect1);
      }
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<long>(boost::any_cast<long>(m["updated"]));
    }
  }


  virtual ~ListAppGroupsResponseBodyResult() = default;
};
class ListAppGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListAppGroupsResponseBodyResult>> result{};
  shared_ptr<long> totalCount{};

  ListAppGroupsResponseBody() {}

  explicit ListAppGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListAppGroupsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAppGroupsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListAppGroupsResponseBodyResult>>(expect1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListAppGroupsResponseBody() = default;
};
class ListAppGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAppGroupsResponseBody> body{};

  ListAppGroupsResponse() {}

  explicit ListAppGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAppGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAppGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAppGroupsResponse() = default;
};
class ListAppsRequest : public Darabonba::Model {
public:
  shared_ptr<bool> group{};
  shared_ptr<long> page{};
  shared_ptr<long> size{};

  ListAppsRequest() {}

  explicit ListAppsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (group) {
      res["group"] = boost::any(*group);
    }
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("group") != m.end() && !m["group"].empty()) {
      group = make_shared<bool>(boost::any_cast<bool>(m["group"]));
    }
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["page"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
  }


  virtual ~ListAppsRequest() = default;
};
class ListAppsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  ListAppsResponse() {}

  explicit ListAppsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~ListAppsResponse() = default;
};
class ListDataCollectionsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListDataCollectionsRequest() {}

  explicit ListDataCollectionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListDataCollectionsRequest() = default;
};
class ListDataCollectionsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> created{};
  shared_ptr<string> dataCollectionType{};
  shared_ptr<string> id{};
  shared_ptr<string> industryName{};
  shared_ptr<string> name{};
  shared_ptr<long> status{};
  shared_ptr<string> sundialId{};
  shared_ptr<string> type{};
  shared_ptr<long> updated{};

  ListDataCollectionsResponseBodyResult() {}

  explicit ListDataCollectionsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (dataCollectionType) {
      res["dataCollectionType"] = boost::any(*dataCollectionType);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (industryName) {
      res["industryName"] = boost::any(*industryName);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (sundialId) {
      res["sundialId"] = boost::any(*sundialId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<long>(boost::any_cast<long>(m["created"]));
    }
    if (m.find("dataCollectionType") != m.end() && !m["dataCollectionType"].empty()) {
      dataCollectionType = make_shared<string>(boost::any_cast<string>(m["dataCollectionType"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("industryName") != m.end() && !m["industryName"].empty()) {
      industryName = make_shared<string>(boost::any_cast<string>(m["industryName"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("sundialId") != m.end() && !m["sundialId"].empty()) {
      sundialId = make_shared<string>(boost::any_cast<string>(m["sundialId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<long>(boost::any_cast<long>(m["updated"]));
    }
  }


  virtual ~ListDataCollectionsResponseBodyResult() = default;
};
class ListDataCollectionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListDataCollectionsResponseBodyResult>> result{};
  shared_ptr<long> totalCount{};

  ListDataCollectionsResponseBody() {}

  explicit ListDataCollectionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListDataCollectionsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDataCollectionsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListDataCollectionsResponseBodyResult>>(expect1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListDataCollectionsResponseBody() = default;
};
class ListDataCollectionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDataCollectionsResponseBody> body{};

  ListDataCollectionsResponse() {}

  explicit ListDataCollectionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDataCollectionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDataCollectionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDataCollectionsResponse() = default;
};
class ListDataSourceTableFieldsRequest : public Darabonba::Model {
public:
  shared_ptr<string> params{};
  shared_ptr<bool> rawType{};

  ListDataSourceTableFieldsRequest() {}

  explicit ListDataSourceTableFieldsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (params) {
      res["params"] = boost::any(*params);
    }
    if (rawType) {
      res["rawType"] = boost::any(*rawType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("params") != m.end() && !m["params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["params"]));
    }
    if (m.find("rawType") != m.end() && !m["rawType"].empty()) {
      rawType = make_shared<bool>(boost::any_cast<bool>(m["rawType"]));
    }
  }


  virtual ~ListDataSourceTableFieldsRequest() = default;
};
class ListDataSourceTableFieldsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  ListDataSourceTableFieldsResponseBody() {}

  explicit ListDataSourceTableFieldsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ListDataSourceTableFieldsResponseBody() = default;
};
class ListDataSourceTableFieldsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDataSourceTableFieldsResponseBody> body{};

  ListDataSourceTableFieldsResponse() {}

  explicit ListDataSourceTableFieldsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDataSourceTableFieldsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDataSourceTableFieldsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDataSourceTableFieldsResponse() = default;
};
class ListDataSourceTablesRequest : public Darabonba::Model {
public:
  shared_ptr<string> params{};

  ListDataSourceTablesRequest() {}

  explicit ListDataSourceTablesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (params) {
      res["params"] = boost::any(*params);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("params") != m.end() && !m["params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["params"]));
    }
  }


  virtual ~ListDataSourceTablesRequest() = default;
};
class ListDataSourceTablesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> result{};

  ListDataSourceTablesResponseBody() {}

  explicit ListDataSourceTablesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["result"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      result = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListDataSourceTablesResponseBody() = default;
};
class ListDataSourceTablesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDataSourceTablesResponseBody> body{};

  ListDataSourceTablesResponse() {}

  explicit ListDataSourceTablesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDataSourceTablesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDataSourceTablesResponseBody>(model1);
      }
    }
  }


  virtual ~ListDataSourceTablesResponse() = default;
};
class ListFirstRanksResponseBodyResultMeta : public Darabonba::Model {
public:
  shared_ptr<string> arg{};
  shared_ptr<string> attribute{};
  shared_ptr<long> weight{};

  ListFirstRanksResponseBodyResultMeta() {}

  explicit ListFirstRanksResponseBodyResultMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arg) {
      res["arg"] = boost::any(*arg);
    }
    if (attribute) {
      res["attribute"] = boost::any(*attribute);
    }
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arg") != m.end() && !m["arg"].empty()) {
      arg = make_shared<string>(boost::any_cast<string>(m["arg"]));
    }
    if (m.find("attribute") != m.end() && !m["attribute"].empty()) {
      attribute = make_shared<string>(boost::any_cast<string>(m["attribute"]));
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["weight"]));
    }
  }


  virtual ~ListFirstRanksResponseBodyResultMeta() = default;
};
class ListFirstRanksResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<long> created{};
  shared_ptr<string> description{};
  shared_ptr<vector<ListFirstRanksResponseBodyResultMeta>> meta{};
  shared_ptr<string> name{};
  shared_ptr<long> updated{};

  ListFirstRanksResponseBodyResult() {}

  explicit ListFirstRanksResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["active"] = boost::any(*active);
    }
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (meta) {
      vector<boost::any> temp1;
      for(auto item1:*meta){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["meta"] = boost::any(temp1);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("active") != m.end() && !m["active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["active"]));
    }
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<long>(boost::any_cast<long>(m["created"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("meta") != m.end() && !m["meta"].empty()) {
      if (typeid(vector<boost::any>) == m["meta"].type()) {
        vector<ListFirstRanksResponseBodyResultMeta> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["meta"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFirstRanksResponseBodyResultMeta model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        meta = make_shared<vector<ListFirstRanksResponseBodyResultMeta>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<long>(boost::any_cast<long>(m["updated"]));
    }
  }


  virtual ~ListFirstRanksResponseBodyResult() = default;
};
class ListFirstRanksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListFirstRanksResponseBodyResult>> result{};

  ListFirstRanksResponseBody() {}

  explicit ListFirstRanksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListFirstRanksResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFirstRanksResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListFirstRanksResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListFirstRanksResponseBody() = default;
};
class ListFirstRanksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFirstRanksResponseBody> body{};

  ListFirstRanksResponse() {}

  explicit ListFirstRanksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListFirstRanksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFirstRanksResponseBody>(model1);
      }
    }
  }


  virtual ~ListFirstRanksResponse() = default;
};
class ListFunctionInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> functionType{};
  shared_ptr<string> modelType{};
  shared_ptr<string> output{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> source{};

  ListFunctionInstancesRequest() {}

  explicit ListFunctionInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (functionType) {
      res["functionType"] = boost::any(*functionType);
    }
    if (modelType) {
      res["modelType"] = boost::any(*modelType);
    }
    if (output) {
      res["output"] = boost::any(*output);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (source) {
      res["source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("functionType") != m.end() && !m["functionType"].empty()) {
      functionType = make_shared<string>(boost::any_cast<string>(m["functionType"]));
    }
    if (m.find("modelType") != m.end() && !m["modelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["modelType"]));
    }
    if (m.find("output") != m.end() && !m["output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["output"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
  }


  virtual ~ListFunctionInstancesRequest() = default;
};
class ListFunctionInstancesResponseBodyResultBelongs : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> domain{};
  shared_ptr<string> language{};

  ListFunctionInstancesResponseBodyResultBelongs() {}

  explicit ListFunctionInstancesResponseBodyResultBelongs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
  }


  virtual ~ListFunctionInstancesResponseBodyResultBelongs() = default;
};
class ListFunctionInstancesResponseBodyResultCreateParameters : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  ListFunctionInstancesResponseBodyResultCreateParameters() {}

  explicit ListFunctionInstancesResponseBodyResultCreateParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListFunctionInstancesResponseBodyResultCreateParameters() = default;
};
class ListFunctionInstancesResponseBodyResultUsageParameters : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  ListFunctionInstancesResponseBodyResultUsageParameters() {}

  explicit ListFunctionInstancesResponseBodyResultUsageParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListFunctionInstancesResponseBodyResultUsageParameters() = default;
};
class ListFunctionInstancesResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<ListFunctionInstancesResponseBodyResultBelongs> belongs{};
  shared_ptr<vector<ListFunctionInstancesResponseBodyResultCreateParameters>> createParameters{};
  shared_ptr<long> createTime{};
  shared_ptr<string> cron{};
  shared_ptr<string> description{};
  shared_ptr<string> extendInfo{};
  shared_ptr<string> functionName{};
  shared_ptr<string> functionType{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> modelType{};
  shared_ptr<string> source{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListFunctionInstancesResponseBodyResultUsageParameters>> usageParameters{};
  shared_ptr<long> versionId{};

  ListFunctionInstancesResponseBodyResult() {}

  explicit ListFunctionInstancesResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (belongs) {
      res["Belongs"] = belongs ? boost::any(belongs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createParameters) {
      vector<boost::any> temp1;
      for(auto item1:*createParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CreateParameters"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (cron) {
      res["Cron"] = boost::any(*cron);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (extendInfo) {
      res["ExtendInfo"] = boost::any(*extendInfo);
    }
    if (functionName) {
      res["FunctionName"] = boost::any(*functionName);
    }
    if (functionType) {
      res["FunctionType"] = boost::any(*functionType);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (usageParameters) {
      vector<boost::any> temp1;
      for(auto item1:*usageParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UsageParameters"] = boost::any(temp1);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Belongs") != m.end() && !m["Belongs"].empty()) {
      if (typeid(map<string, boost::any>) == m["Belongs"].type()) {
        ListFunctionInstancesResponseBodyResultBelongs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Belongs"]));
        belongs = make_shared<ListFunctionInstancesResponseBodyResultBelongs>(model1);
      }
    }
    if (m.find("CreateParameters") != m.end() && !m["CreateParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["CreateParameters"].type()) {
        vector<ListFunctionInstancesResponseBodyResultCreateParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CreateParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFunctionInstancesResponseBodyResultCreateParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        createParameters = make_shared<vector<ListFunctionInstancesResponseBodyResultCreateParameters>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Cron") != m.end() && !m["Cron"].empty()) {
      cron = make_shared<string>(boost::any_cast<string>(m["Cron"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExtendInfo") != m.end() && !m["ExtendInfo"].empty()) {
      extendInfo = make_shared<string>(boost::any_cast<string>(m["ExtendInfo"]));
    }
    if (m.find("FunctionName") != m.end() && !m["FunctionName"].empty()) {
      functionName = make_shared<string>(boost::any_cast<string>(m["FunctionName"]));
    }
    if (m.find("FunctionType") != m.end() && !m["FunctionType"].empty()) {
      functionType = make_shared<string>(boost::any_cast<string>(m["FunctionType"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UsageParameters") != m.end() && !m["UsageParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["UsageParameters"].type()) {
        vector<ListFunctionInstancesResponseBodyResultUsageParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UsageParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFunctionInstancesResponseBodyResultUsageParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        usageParameters = make_shared<vector<ListFunctionInstancesResponseBodyResultUsageParameters>>(expect1);
      }
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<long>(boost::any_cast<long>(m["VersionId"]));
    }
  }


  virtual ~ListFunctionInstancesResponseBodyResult() = default;
};
class ListFunctionInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpCode{};
  shared_ptr<long> latency{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListFunctionInstancesResponseBodyResult>> result{};
  shared_ptr<string> status{};
  shared_ptr<long> totalCount{};

  ListFunctionInstancesResponseBody() {}

  explicit ListFunctionInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (latency) {
      res["Latency"] = boost::any(*latency);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["HttpCode"]));
    }
    if (m.find("Latency") != m.end() && !m["Latency"].empty()) {
      latency = make_shared<long>(boost::any_cast<long>(m["Latency"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListFunctionInstancesResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFunctionInstancesResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListFunctionInstancesResponseBodyResult>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListFunctionInstancesResponseBody() = default;
};
class ListFunctionInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFunctionInstancesResponseBody> body{};

  ListFunctionInstancesResponse() {}

  explicit ListFunctionInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListFunctionInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFunctionInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListFunctionInstancesResponse() = default;
};
class ListFunctionTasksRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> startTime{};
  shared_ptr<string> status{};

  ListFunctionTasksRequest() {}

  explicit ListFunctionTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ListFunctionTasksRequest() = default;
};
class ListFunctionTasksResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> extendInfo{};
  shared_ptr<string> functionName{};
  shared_ptr<string> generation{};
  shared_ptr<long> progress{};
  shared_ptr<string> runId{};
  shared_ptr<long> startTime{};
  shared_ptr<string> status{};

  ListFunctionTasksResponseBodyResult() {}

  explicit ListFunctionTasksResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (extendInfo) {
      res["ExtendInfo"] = boost::any(*extendInfo);
    }
    if (functionName) {
      res["FunctionName"] = boost::any(*functionName);
    }
    if (generation) {
      res["Generation"] = boost::any(*generation);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (runId) {
      res["RunId"] = boost::any(*runId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("ExtendInfo") != m.end() && !m["ExtendInfo"].empty()) {
      extendInfo = make_shared<string>(boost::any_cast<string>(m["ExtendInfo"]));
    }
    if (m.find("FunctionName") != m.end() && !m["FunctionName"].empty()) {
      functionName = make_shared<string>(boost::any_cast<string>(m["FunctionName"]));
    }
    if (m.find("Generation") != m.end() && !m["Generation"].empty()) {
      generation = make_shared<string>(boost::any_cast<string>(m["Generation"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("RunId") != m.end() && !m["RunId"].empty()) {
      runId = make_shared<string>(boost::any_cast<string>(m["RunId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListFunctionTasksResponseBodyResult() = default;
};
class ListFunctionTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpCode{};
  shared_ptr<long> latency{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListFunctionTasksResponseBodyResult>> result{};
  shared_ptr<string> status{};
  shared_ptr<long> totalCount{};

  ListFunctionTasksResponseBody() {}

  explicit ListFunctionTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (latency) {
      res["Latency"] = boost::any(*latency);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["HttpCode"]));
    }
    if (m.find("Latency") != m.end() && !m["Latency"].empty()) {
      latency = make_shared<long>(boost::any_cast<long>(m["Latency"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListFunctionTasksResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFunctionTasksResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListFunctionTasksResponseBodyResult>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListFunctionTasksResponseBody() = default;
};
class ListFunctionTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFunctionTasksResponseBody> body{};

  ListFunctionTasksResponse() {}

  explicit ListFunctionTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListFunctionTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFunctionTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ListFunctionTasksResponse() = default;
};
class ListInterventionDictionariesRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> types{};

  ListInterventionDictionariesRequest() {}

  explicit ListInterventionDictionariesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (types) {
      res["types"] = boost::any(*types);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("types") != m.end() && !m["types"].empty()) {
      types = make_shared<string>(boost::any_cast<string>(m["types"]));
    }
  }


  virtual ~ListInterventionDictionariesRequest() = default;
};
class ListInterventionDictionariesResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> analyzer{};
  shared_ptr<long> created{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<long> updated{};

  ListInterventionDictionariesResponseBodyResult() {}

  explicit ListInterventionDictionariesResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (analyzer) {
      res["analyzer"] = boost::any(*analyzer);
    }
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("analyzer") != m.end() && !m["analyzer"].empty()) {
      analyzer = make_shared<string>(boost::any_cast<string>(m["analyzer"]));
    }
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<long>(boost::any_cast<long>(m["created"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<long>(boost::any_cast<long>(m["updated"]));
    }
  }


  virtual ~ListInterventionDictionariesResponseBodyResult() = default;
};
class ListInterventionDictionariesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListInterventionDictionariesResponseBodyResult>> result{};
  shared_ptr<long> totalCount{};

  ListInterventionDictionariesResponseBody() {}

  explicit ListInterventionDictionariesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListInterventionDictionariesResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInterventionDictionariesResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListInterventionDictionariesResponseBodyResult>>(expect1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListInterventionDictionariesResponseBody() = default;
};
class ListInterventionDictionariesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInterventionDictionariesResponseBody> body{};

  ListInterventionDictionariesResponse() {}

  explicit ListInterventionDictionariesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListInterventionDictionariesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInterventionDictionariesResponseBody>(model1);
      }
    }
  }


  virtual ~ListInterventionDictionariesResponse() = default;
};
class ListInterventionDictionaryEntriesRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> word{};

  ListInterventionDictionaryEntriesRequest() {}

  explicit ListInterventionDictionaryEntriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (word) {
      res["word"] = boost::any(*word);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("word") != m.end() && !m["word"].empty()) {
      word = make_shared<string>(boost::any_cast<string>(m["word"]));
    }
  }


  virtual ~ListInterventionDictionaryEntriesRequest() = default;
};
class ListInterventionDictionaryEntriesResponseBodyResultTokens : public Darabonba::Model {
public:
  shared_ptr<long> order{};
  shared_ptr<string> tag{};
  shared_ptr<string> tagLabel{};
  shared_ptr<string> token{};

  ListInterventionDictionaryEntriesResponseBodyResultTokens() {}

  explicit ListInterventionDictionaryEntriesResponseBodyResultTokens(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (order) {
      res["order"] = boost::any(*order);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    if (tagLabel) {
      res["tagLabel"] = boost::any(*tagLabel);
    }
    if (token) {
      res["token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("order") != m.end() && !m["order"].empty()) {
      order = make_shared<long>(boost::any_cast<long>(m["order"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
    if (m.find("tagLabel") != m.end() && !m["tagLabel"].empty()) {
      tagLabel = make_shared<string>(boost::any_cast<string>(m["tagLabel"]));
    }
    if (m.find("token") != m.end() && !m["token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["token"]));
    }
  }


  virtual ~ListInterventionDictionaryEntriesResponseBodyResultTokens() = default;
};
class ListInterventionDictionaryEntriesResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> cmd{};
  shared_ptr<long> created{};
  shared_ptr<map<string, boost::any>> relevance{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListInterventionDictionaryEntriesResponseBodyResultTokens>> tokens{};
  shared_ptr<long> updated{};
  shared_ptr<string> word{};

  ListInterventionDictionaryEntriesResponseBodyResult() {}

  explicit ListInterventionDictionaryEntriesResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cmd) {
      res["cmd"] = boost::any(*cmd);
    }
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (relevance) {
      res["relevance"] = boost::any(*relevance);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (tokens) {
      vector<boost::any> temp1;
      for(auto item1:*tokens){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tokens"] = boost::any(temp1);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    if (word) {
      res["word"] = boost::any(*word);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cmd") != m.end() && !m["cmd"].empty()) {
      cmd = make_shared<string>(boost::any_cast<string>(m["cmd"]));
    }
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<long>(boost::any_cast<long>(m["created"]));
    }
    if (m.find("relevance") != m.end() && !m["relevance"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["relevance"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      relevance = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("tokens") != m.end() && !m["tokens"].empty()) {
      if (typeid(vector<boost::any>) == m["tokens"].type()) {
        vector<ListInterventionDictionaryEntriesResponseBodyResultTokens> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tokens"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInterventionDictionaryEntriesResponseBodyResultTokens model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tokens = make_shared<vector<ListInterventionDictionaryEntriesResponseBodyResultTokens>>(expect1);
      }
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<long>(boost::any_cast<long>(m["updated"]));
    }
    if (m.find("word") != m.end() && !m["word"].empty()) {
      word = make_shared<string>(boost::any_cast<string>(m["word"]));
    }
  }


  virtual ~ListInterventionDictionaryEntriesResponseBodyResult() = default;
};
class ListInterventionDictionaryEntriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListInterventionDictionaryEntriesResponseBodyResult>> result{};
  shared_ptr<long> totalCount{};

  ListInterventionDictionaryEntriesResponseBody() {}

  explicit ListInterventionDictionaryEntriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListInterventionDictionaryEntriesResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInterventionDictionaryEntriesResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListInterventionDictionaryEntriesResponseBodyResult>>(expect1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListInterventionDictionaryEntriesResponseBody() = default;
};
class ListInterventionDictionaryEntriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInterventionDictionaryEntriesResponseBody> body{};

  ListInterventionDictionaryEntriesResponse() {}

  explicit ListInterventionDictionaryEntriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListInterventionDictionaryEntriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInterventionDictionaryEntriesResponseBody>(model1);
      }
    }
  }


  virtual ~ListInterventionDictionaryEntriesResponse() = default;
};
class ListInterventionDictionaryNerResultsRequest : public Darabonba::Model {
public:
  shared_ptr<string> query{};

  ListInterventionDictionaryNerResultsRequest() {}

  explicit ListInterventionDictionaryNerResultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (query) {
      res["query"] = boost::any(*query);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("query") != m.end() && !m["query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["query"]));
    }
  }


  virtual ~ListInterventionDictionaryNerResultsRequest() = default;
};
class ListInterventionDictionaryNerResultsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> order{};
  shared_ptr<string> tag{};
  shared_ptr<string> tagLabel{};
  shared_ptr<string> token{};

  ListInterventionDictionaryNerResultsResponseBodyResult() {}

  explicit ListInterventionDictionaryNerResultsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (order) {
      res["order"] = boost::any(*order);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    if (tagLabel) {
      res["tagLabel"] = boost::any(*tagLabel);
    }
    if (token) {
      res["token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("order") != m.end() && !m["order"].empty()) {
      order = make_shared<long>(boost::any_cast<long>(m["order"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
    if (m.find("tagLabel") != m.end() && !m["tagLabel"].empty()) {
      tagLabel = make_shared<string>(boost::any_cast<string>(m["tagLabel"]));
    }
    if (m.find("token") != m.end() && !m["token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["token"]));
    }
  }


  virtual ~ListInterventionDictionaryNerResultsResponseBodyResult() = default;
};
class ListInterventionDictionaryNerResultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListInterventionDictionaryNerResultsResponseBodyResult>> result{};

  ListInterventionDictionaryNerResultsResponseBody() {}

  explicit ListInterventionDictionaryNerResultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListInterventionDictionaryNerResultsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInterventionDictionaryNerResultsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListInterventionDictionaryNerResultsResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListInterventionDictionaryNerResultsResponseBody() = default;
};
class ListInterventionDictionaryNerResultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInterventionDictionaryNerResultsResponseBody> body{};

  ListInterventionDictionaryNerResultsResponse() {}

  explicit ListInterventionDictionaryNerResultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListInterventionDictionaryNerResultsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInterventionDictionaryNerResultsResponseBody>(model1);
      }
    }
  }


  virtual ~ListInterventionDictionaryNerResultsResponse() = default;
};
class ListInterventionDictionaryRelatedEntitiesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<map<string, boost::any>>> result{};

  ListInterventionDictionaryRelatedEntitiesResponseBody() {}

  explicit ListInterventionDictionaryRelatedEntitiesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["result"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      result = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
  }


  virtual ~ListInterventionDictionaryRelatedEntitiesResponseBody() = default;
};
class ListInterventionDictionaryRelatedEntitiesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInterventionDictionaryRelatedEntitiesResponseBody> body{};

  ListInterventionDictionaryRelatedEntitiesResponse() {}

  explicit ListInterventionDictionaryRelatedEntitiesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListInterventionDictionaryRelatedEntitiesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInterventionDictionaryRelatedEntitiesResponseBody>(model1);
      }
    }
  }


  virtual ~ListInterventionDictionaryRelatedEntitiesResponse() = default;
};
class ListModelsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> type{};

  ListModelsRequest() {}

  explicit ListModelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListModelsRequest() = default;
};
class ListModelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<map<string, boost::any>>> result{};

  ListModelsResponseBody() {}

  explicit ListModelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["result"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      result = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
  }


  virtual ~ListModelsResponseBody() = default;
};
class ListModelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListModelsResponseBody> body{};

  ListModelsResponse() {}

  explicit ListModelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListModelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListModelsResponseBody>(model1);
      }
    }
  }


  virtual ~ListModelsResponse() = default;
};
class ListProceedingsRequest : public Darabonba::Model {
public:
  shared_ptr<bool> filterFinished{};

  ListProceedingsRequest() {}

  explicit ListProceedingsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filterFinished) {
      res["filterFinished"] = boost::any(*filterFinished);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("filterFinished") != m.end() && !m["filterFinished"].empty()) {
      filterFinished = make_shared<bool>(boost::any_cast<bool>(m["filterFinished"]));
    }
  }


  virtual ~ListProceedingsRequest() = default;
};
class ListProceedingsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ListProceedingsResponseBody() {}

  explicit ListProceedingsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListProceedingsResponseBody() = default;
};
class ListProceedingsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProceedingsResponseBody> body{};

  ListProceedingsResponse() {}

  explicit ListProceedingsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListProceedingsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProceedingsResponseBody>(model1);
      }
    }
  }


  virtual ~ListProceedingsResponse() = default;
};
class ListQueryProcessorAnalyzerResultsRequest : public Darabonba::Model {
public:
  shared_ptr<string> text{};

  ListQueryProcessorAnalyzerResultsRequest() {}

  explicit ListQueryProcessorAnalyzerResultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~ListQueryProcessorAnalyzerResultsRequest() = default;
};
class ListQueryProcessorAnalyzerResultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  ListQueryProcessorAnalyzerResultsResponseBody() {}

  explicit ListQueryProcessorAnalyzerResultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ListQueryProcessorAnalyzerResultsResponseBody() = default;
};
class ListQueryProcessorAnalyzerResultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListQueryProcessorAnalyzerResultsResponseBody> body{};

  ListQueryProcessorAnalyzerResultsResponse() {}

  explicit ListQueryProcessorAnalyzerResultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListQueryProcessorAnalyzerResultsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListQueryProcessorAnalyzerResultsResponseBody>(model1);
      }
    }
  }


  virtual ~ListQueryProcessorAnalyzerResultsResponse() = default;
};
class ListQueryProcessorNersRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};

  ListQueryProcessorNersRequest() {}

  explicit ListQueryProcessorNersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
  }


  virtual ~ListQueryProcessorNersRequest() = default;
};
class ListQueryProcessorNersResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> label{};
  shared_ptr<long> order{};
  shared_ptr<string> priority{};
  shared_ptr<string> tag{};

  ListQueryProcessorNersResponseBodyResult() {}

  explicit ListQueryProcessorNersResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (label) {
      res["label"] = boost::any(*label);
    }
    if (order) {
      res["order"] = boost::any(*order);
    }
    if (priority) {
      res["priority"] = boost::any(*priority);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("label") != m.end() && !m["label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["label"]));
    }
    if (m.find("order") != m.end() && !m["order"].empty()) {
      order = make_shared<long>(boost::any_cast<long>(m["order"]));
    }
    if (m.find("priority") != m.end() && !m["priority"].empty()) {
      priority = make_shared<string>(boost::any_cast<string>(m["priority"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
  }


  virtual ~ListQueryProcessorNersResponseBodyResult() = default;
};
class ListQueryProcessorNersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListQueryProcessorNersResponseBodyResult>> result{};

  ListQueryProcessorNersResponseBody() {}

  explicit ListQueryProcessorNersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListQueryProcessorNersResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQueryProcessorNersResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListQueryProcessorNersResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListQueryProcessorNersResponseBody() = default;
};
class ListQueryProcessorNersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListQueryProcessorNersResponseBody> body{};

  ListQueryProcessorNersResponse() {}

  explicit ListQueryProcessorNersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListQueryProcessorNersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListQueryProcessorNersResponseBody>(model1);
      }
    }
  }


  virtual ~ListQueryProcessorNersResponse() = default;
};
class ListQueryProcessorsRequest : public Darabonba::Model {
public:
  shared_ptr<long> isActive{};

  ListQueryProcessorsRequest() {}

  explicit ListQueryProcessorsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isActive) {
      res["isActive"] = boost::any(*isActive);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("isActive") != m.end() && !m["isActive"].empty()) {
      isActive = make_shared<long>(boost::any_cast<long>(m["isActive"]));
    }
  }


  virtual ~ListQueryProcessorsRequest() = default;
};
class ListQueryProcessorsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<long> created{};
  shared_ptr<string> domain{};
  shared_ptr<vector<string>> indexes{};
  shared_ptr<string> name{};
  shared_ptr<vector<map<string, boost::any>>> processors{};
  shared_ptr<long> updated{};

  ListQueryProcessorsResponseBodyResult() {}

  explicit ListQueryProcessorsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["active"] = boost::any(*active);
    }
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    if (indexes) {
      res["indexes"] = boost::any(*indexes);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (processors) {
      res["processors"] = boost::any(*processors);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("active") != m.end() && !m["active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["active"]));
    }
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<long>(boost::any_cast<long>(m["created"]));
    }
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
    if (m.find("indexes") != m.end() && !m["indexes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["indexes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["indexes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      indexes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("processors") != m.end() && !m["processors"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["processors"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["processors"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      processors = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<long>(boost::any_cast<long>(m["updated"]));
    }
  }


  virtual ~ListQueryProcessorsResponseBodyResult() = default;
};
class ListQueryProcessorsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListQueryProcessorsResponseBodyResult>> result{};

  ListQueryProcessorsResponseBody() {}

  explicit ListQueryProcessorsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListQueryProcessorsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQueryProcessorsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListQueryProcessorsResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListQueryProcessorsResponseBody() = default;
};
class ListQueryProcessorsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListQueryProcessorsResponseBody> body{};

  ListQueryProcessorsResponse() {}

  explicit ListQueryProcessorsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListQueryProcessorsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListQueryProcessorsResponseBody>(model1);
      }
    }
  }


  virtual ~ListQueryProcessorsResponse() = default;
};
class ListQuotaReviewTasksRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListQuotaReviewTasksRequest() {}

  explicit ListQuotaReviewTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListQuotaReviewTasksRequest() = default;
};
class ListQuotaReviewTasksResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> appGroupId{};
  shared_ptr<string> appGroupName{};
  shared_ptr<string> appGroupType{};
  shared_ptr<bool> approved{};
  shared_ptr<bool> available{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> memo{};
  shared_ptr<long> newComputeResource{};
  shared_ptr<long> newSocSize{};
  shared_ptr<string> newSpec{};
  shared_ptr<long> oldComputeResource{};
  shared_ptr<long> oldDocSize{};
  shared_ptr<string> oldSpec{};
  shared_ptr<bool> pending{};

  ListQuotaReviewTasksResponseBodyResult() {}

  explicit ListQuotaReviewTasksResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appGroupId) {
      res["appGroupId"] = boost::any(*appGroupId);
    }
    if (appGroupName) {
      res["appGroupName"] = boost::any(*appGroupName);
    }
    if (appGroupType) {
      res["appGroupType"] = boost::any(*appGroupType);
    }
    if (approved) {
      res["approved"] = boost::any(*approved);
    }
    if (available) {
      res["available"] = boost::any(*available);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (memo) {
      res["memo"] = boost::any(*memo);
    }
    if (newComputeResource) {
      res["newComputeResource"] = boost::any(*newComputeResource);
    }
    if (newSocSize) {
      res["newSocSize"] = boost::any(*newSocSize);
    }
    if (newSpec) {
      res["newSpec"] = boost::any(*newSpec);
    }
    if (oldComputeResource) {
      res["oldComputeResource"] = boost::any(*oldComputeResource);
    }
    if (oldDocSize) {
      res["oldDocSize"] = boost::any(*oldDocSize);
    }
    if (oldSpec) {
      res["oldSpec"] = boost::any(*oldSpec);
    }
    if (pending) {
      res["pending"] = boost::any(*pending);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appGroupId") != m.end() && !m["appGroupId"].empty()) {
      appGroupId = make_shared<long>(boost::any_cast<long>(m["appGroupId"]));
    }
    if (m.find("appGroupName") != m.end() && !m["appGroupName"].empty()) {
      appGroupName = make_shared<string>(boost::any_cast<string>(m["appGroupName"]));
    }
    if (m.find("appGroupType") != m.end() && !m["appGroupType"].empty()) {
      appGroupType = make_shared<string>(boost::any_cast<string>(m["appGroupType"]));
    }
    if (m.find("approved") != m.end() && !m["approved"].empty()) {
      approved = make_shared<bool>(boost::any_cast<bool>(m["approved"]));
    }
    if (m.find("available") != m.end() && !m["available"].empty()) {
      available = make_shared<bool>(boost::any_cast<bool>(m["available"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("memo") != m.end() && !m["memo"].empty()) {
      memo = make_shared<string>(boost::any_cast<string>(m["memo"]));
    }
    if (m.find("newComputeResource") != m.end() && !m["newComputeResource"].empty()) {
      newComputeResource = make_shared<long>(boost::any_cast<long>(m["newComputeResource"]));
    }
    if (m.find("newSocSize") != m.end() && !m["newSocSize"].empty()) {
      newSocSize = make_shared<long>(boost::any_cast<long>(m["newSocSize"]));
    }
    if (m.find("newSpec") != m.end() && !m["newSpec"].empty()) {
      newSpec = make_shared<string>(boost::any_cast<string>(m["newSpec"]));
    }
    if (m.find("oldComputeResource") != m.end() && !m["oldComputeResource"].empty()) {
      oldComputeResource = make_shared<long>(boost::any_cast<long>(m["oldComputeResource"]));
    }
    if (m.find("oldDocSize") != m.end() && !m["oldDocSize"].empty()) {
      oldDocSize = make_shared<long>(boost::any_cast<long>(m["oldDocSize"]));
    }
    if (m.find("oldSpec") != m.end() && !m["oldSpec"].empty()) {
      oldSpec = make_shared<string>(boost::any_cast<string>(m["oldSpec"]));
    }
    if (m.find("pending") != m.end() && !m["pending"].empty()) {
      pending = make_shared<bool>(boost::any_cast<bool>(m["pending"]));
    }
  }


  virtual ~ListQuotaReviewTasksResponseBodyResult() = default;
};
class ListQuotaReviewTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListQuotaReviewTasksResponseBodyResult>> result{};
  shared_ptr<long> totalCount{};

  ListQuotaReviewTasksResponseBody() {}

  explicit ListQuotaReviewTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListQuotaReviewTasksResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQuotaReviewTasksResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListQuotaReviewTasksResponseBodyResult>>(expect1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListQuotaReviewTasksResponseBody() = default;
};
class ListQuotaReviewTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListQuotaReviewTasksResponseBody> body{};

  ListQuotaReviewTasksResponse() {}

  explicit ListQuotaReviewTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListQuotaReviewTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListQuotaReviewTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ListQuotaReviewTasksResponse() = default;
};
class ListScheduledTasksRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> type{};

  ListScheduledTasksRequest() {}

  explicit ListScheduledTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListScheduledTasksRequest() = default;
};
class ListScheduledTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<map<string, boost::any>>> result{};
  shared_ptr<long> totalCount{};

  ListScheduledTasksResponseBody() {}

  explicit ListScheduledTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["result"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      result = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListScheduledTasksResponseBody() = default;
};
class ListScheduledTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListScheduledTasksResponseBody> body{};

  ListScheduledTasksResponse() {}

  explicit ListScheduledTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListScheduledTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListScheduledTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ListScheduledTasksResponse() = default;
};
class ListSearchStrategiesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ListSearchStrategiesResponseBody() {}

  explicit ListSearchStrategiesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListSearchStrategiesResponseBody() = default;
};
class ListSearchStrategiesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSearchStrategiesResponseBody> body{};

  ListSearchStrategiesResponse() {}

  explicit ListSearchStrategiesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSearchStrategiesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSearchStrategiesResponseBody>(model1);
      }
    }
  }


  virtual ~ListSearchStrategiesResponse() = default;
};
class ListSecondRanksResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<long> created{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> isDefault{};
  shared_ptr<string> isSys{};
  shared_ptr<string> meta{};
  shared_ptr<string> name{};
  shared_ptr<long> updated{};

  ListSecondRanksResponseBodyResult() {}

  explicit ListSecondRanksResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["active"] = boost::any(*active);
    }
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (isDefault) {
      res["isDefault"] = boost::any(*isDefault);
    }
    if (isSys) {
      res["isSys"] = boost::any(*isSys);
    }
    if (meta) {
      res["meta"] = boost::any(*meta);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("active") != m.end() && !m["active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["active"]));
    }
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<long>(boost::any_cast<long>(m["created"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("isDefault") != m.end() && !m["isDefault"].empty()) {
      isDefault = make_shared<string>(boost::any_cast<string>(m["isDefault"]));
    }
    if (m.find("isSys") != m.end() && !m["isSys"].empty()) {
      isSys = make_shared<string>(boost::any_cast<string>(m["isSys"]));
    }
    if (m.find("meta") != m.end() && !m["meta"].empty()) {
      meta = make_shared<string>(boost::any_cast<string>(m["meta"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<long>(boost::any_cast<long>(m["updated"]));
    }
  }


  virtual ~ListSecondRanksResponseBodyResult() = default;
};
class ListSecondRanksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSecondRanksResponseBodyResult>> result{};
  shared_ptr<long> totalCount{};

  ListSecondRanksResponseBody() {}

  explicit ListSecondRanksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListSecondRanksResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSecondRanksResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListSecondRanksResponseBodyResult>>(expect1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListSecondRanksResponseBody() = default;
};
class ListSecondRanksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSecondRanksResponseBody> body{};

  ListSecondRanksResponse() {}

  explicit ListSecondRanksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSecondRanksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSecondRanksResponseBody>(model1);
      }
    }
  }


  virtual ~ListSecondRanksResponse() = default;
};
class ListSlowQueryCategoriesResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> analyzeStatus{};
  shared_ptr<long> end{};
  shared_ptr<long> start{};

  ListSlowQueryCategoriesResponseBodyResult() {}

  explicit ListSlowQueryCategoriesResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (analyzeStatus) {
      res["analyzeStatus"] = boost::any(*analyzeStatus);
    }
    if (end) {
      res["end"] = boost::any(*end);
    }
    if (start) {
      res["start"] = boost::any(*start);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("analyzeStatus") != m.end() && !m["analyzeStatus"].empty()) {
      analyzeStatus = make_shared<string>(boost::any_cast<string>(m["analyzeStatus"]));
    }
    if (m.find("end") != m.end() && !m["end"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["end"]));
    }
    if (m.find("start") != m.end() && !m["start"].empty()) {
      start = make_shared<long>(boost::any_cast<long>(m["start"]));
    }
  }


  virtual ~ListSlowQueryCategoriesResponseBodyResult() = default;
};
class ListSlowQueryCategoriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListSlowQueryCategoriesResponseBodyResult> result{};

  ListSlowQueryCategoriesResponseBody() {}

  explicit ListSlowQueryCategoriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        ListSlowQueryCategoriesResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<ListSlowQueryCategoriesResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListSlowQueryCategoriesResponseBody() = default;
};
class ListSlowQueryCategoriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSlowQueryCategoriesResponseBody> body{};

  ListSlowQueryCategoriesResponse() {}

  explicit ListSlowQueryCategoriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSlowQueryCategoriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSlowQueryCategoriesResponseBody>(model1);
      }
    }
  }


  virtual ~ListSlowQueryCategoriesResponse() = default;
};
class ListSlowQueryQueriesResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> appQuery{};
  shared_ptr<long> end{};
  shared_ptr<long> index{};
  shared_ptr<long> start{};

  ListSlowQueryQueriesResponseBodyResult() {}

  explicit ListSlowQueryQueriesResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appQuery) {
      res["appQuery"] = boost::any(*appQuery);
    }
    if (end) {
      res["end"] = boost::any(*end);
    }
    if (index) {
      res["index"] = boost::any(*index);
    }
    if (start) {
      res["start"] = boost::any(*start);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appQuery") != m.end() && !m["appQuery"].empty()) {
      appQuery = make_shared<string>(boost::any_cast<string>(m["appQuery"]));
    }
    if (m.find("end") != m.end() && !m["end"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["end"]));
    }
    if (m.find("index") != m.end() && !m["index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["index"]));
    }
    if (m.find("start") != m.end() && !m["start"].empty()) {
      start = make_shared<long>(boost::any_cast<long>(m["start"]));
    }
  }


  virtual ~ListSlowQueryQueriesResponseBodyResult() = default;
};
class ListSlowQueryQueriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListSlowQueryQueriesResponseBodyResult> result{};

  ListSlowQueryQueriesResponseBody() {}

  explicit ListSlowQueryQueriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        ListSlowQueryQueriesResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<ListSlowQueryQueriesResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListSlowQueryQueriesResponseBody() = default;
};
class ListSlowQueryQueriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSlowQueryQueriesResponseBody> body{};

  ListSlowQueryQueriesResponse() {}

  explicit ListSlowQueryQueriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSlowQueryQueriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSlowQueryQueriesResponseBody>(model1);
      }
    }
  }


  virtual ~ListSlowQueryQueriesResponse() = default;
};
class ListSortExpressionsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<long> created{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<long> updated{};

  ListSortExpressionsResponseBodyResult() {}

  explicit ListSortExpressionsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["active"] = boost::any(*active);
    }
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("active") != m.end() && !m["active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["active"]));
    }
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<long>(boost::any_cast<long>(m["created"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<long>(boost::any_cast<long>(m["updated"]));
    }
  }


  virtual ~ListSortExpressionsResponseBodyResult() = default;
};
class ListSortExpressionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSortExpressionsResponseBodyResult>> result{};

  ListSortExpressionsResponseBody() {}

  explicit ListSortExpressionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListSortExpressionsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSortExpressionsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListSortExpressionsResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListSortExpressionsResponseBody() = default;
};
class ListSortExpressionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSortExpressionsResponseBody> body{};

  ListSortExpressionsResponse() {}

  explicit ListSortExpressionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSortExpressionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSortExpressionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSortExpressionsResponse() = default;
};
class ListSortScriptsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> scope{};
  shared_ptr<string> scriptName{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  ListSortScriptsResponseBodyResult() {}

  explicit ListSortScriptsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (modifyTime) {
      res["modifyTime"] = boost::any(*modifyTime);
    }
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    if (scriptName) {
      res["scriptName"] = boost::any(*scriptName);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("modifyTime") != m.end() && !m["modifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["modifyTime"]));
    }
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["scope"]));
    }
    if (m.find("scriptName") != m.end() && !m["scriptName"].empty()) {
      scriptName = make_shared<string>(boost::any_cast<string>(m["scriptName"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListSortScriptsResponseBodyResult() = default;
};
class ListSortScriptsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSortScriptsResponseBodyResult>> result{};

  ListSortScriptsResponseBody() {}

  explicit ListSortScriptsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListSortScriptsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSortScriptsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListSortScriptsResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListSortScriptsResponseBody() = default;
};
class ListSortScriptsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSortScriptsResponseBody> body{};

  ListSortScriptsResponse() {}

  explicit ListSortScriptsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSortScriptsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSortScriptsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSortScriptsResponse() = default;
};
class ListStatisticLogsRequest : public Darabonba::Model {
public:
  shared_ptr<string> columns{};
  shared_ptr<bool> distinct{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> query{};
  shared_ptr<string> sortBy{};
  shared_ptr<long> startTime{};
  shared_ptr<long> stopTime{};

  ListStatisticLogsRequest() {}

  explicit ListStatisticLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (columns) {
      res["columns"] = boost::any(*columns);
    }
    if (distinct) {
      res["distinct"] = boost::any(*distinct);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (query) {
      res["query"] = boost::any(*query);
    }
    if (sortBy) {
      res["sortBy"] = boost::any(*sortBy);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (stopTime) {
      res["stopTime"] = boost::any(*stopTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("columns") != m.end() && !m["columns"].empty()) {
      columns = make_shared<string>(boost::any_cast<string>(m["columns"]));
    }
    if (m.find("distinct") != m.end() && !m["distinct"].empty()) {
      distinct = make_shared<bool>(boost::any_cast<bool>(m["distinct"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("query") != m.end() && !m["query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["query"]));
    }
    if (m.find("sortBy") != m.end() && !m["sortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["sortBy"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("stopTime") != m.end() && !m["stopTime"].empty()) {
      stopTime = make_shared<long>(boost::any_cast<long>(m["stopTime"]));
    }
  }


  virtual ~ListStatisticLogsRequest() = default;
};
class ListStatisticLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<map<string, boost::any>>> result{};
  shared_ptr<long> totalCount{};

  ListStatisticLogsResponseBody() {}

  explicit ListStatisticLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["result"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      result = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListStatisticLogsResponseBody() = default;
};
class ListStatisticLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListStatisticLogsResponseBody> body{};

  ListStatisticLogsResponse() {}

  explicit ListStatisticLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListStatisticLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListStatisticLogsResponseBody>(model1);
      }
    }
  }


  virtual ~ListStatisticLogsResponse() = default;
};
class ListStatisticReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> columns{};
  shared_ptr<long> endTime{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> query{};
  shared_ptr<long> startTime{};

  ListStatisticReportRequest() {}

  explicit ListStatisticReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (columns) {
      res["columns"] = boost::any(*columns);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (query) {
      res["query"] = boost::any(*query);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("columns") != m.end() && !m["columns"].empty()) {
      columns = make_shared<string>(boost::any_cast<string>(m["columns"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("query") != m.end() && !m["query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["query"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
  }


  virtual ~ListStatisticReportRequest() = default;
};
class ListStatisticReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<map<string, boost::any>>> result{};
  shared_ptr<long> totalCount{};

  ListStatisticReportResponseBody() {}

  explicit ListStatisticReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["result"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      result = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListStatisticReportResponseBody() = default;
};
class ListStatisticReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListStatisticReportResponseBody> body{};

  ListStatisticReportResponse() {}

  explicit ListStatisticReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListStatisticReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListStatisticReportResponseBody>(model1);
      }
    }
  }


  virtual ~ListStatisticReportResponse() = default;
};
class ListTagResourcesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListTagResourcesRequestTag() {}

  explicit ListTagResourcesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~ListTagResourcesRequestTag() = default;
};
class ListTagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<ListTagResourcesRequestTag>> tag{};

  ListTagResourcesRequest() {}

  explicit ListTagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      if (typeid(vector<boost::any>) == m["tag"].type()) {
        vector<ListTagResourcesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListTagResourcesRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesRequest() = default;
};
class ListTagResourcesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> resourceIdShrink{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagShrink{};

  ListTagResourcesShrinkRequest() {}

  explicit ListTagResourcesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (resourceIdShrink) {
      res["resourceId"] = boost::any(*resourceIdShrink);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (tagShrink) {
      res["tag"] = boost::any(*tagShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      resourceIdShrink = make_shared<string>(boost::any_cast<string>(m["resourceId"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tagShrink = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
  }


  virtual ~ListTagResourcesShrinkRequest() = default;
};
class ListTagResourcesResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListTagResourcesResponseBodyResult() {}

  explicit ListTagResourcesResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (tagKey) {
      res["tagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["tagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["resourceId"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
    if (m.find("tagKey") != m.end() && !m["tagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["tagKey"]));
    }
    if (m.find("tagValue") != m.end() && !m["tagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["tagValue"]));
    }
  }


  virtual ~ListTagResourcesResponseBodyResult() = default;
};
class ListTagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTagResourcesResponseBodyResult>> result{};

  ListTagResourcesResponseBody() {}

  explicit ListTagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListTagResourcesResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListTagResourcesResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesResponseBody() = default;
};
class ListTagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTagResourcesResponseBody> body{};

  ListTagResourcesResponse() {}

  explicit ListTagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListTagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagResourcesResponse() = default;
};
class ListUserAnalyzerEntriesRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> word{};

  ListUserAnalyzerEntriesRequest() {}

  explicit ListUserAnalyzerEntriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (word) {
      res["word"] = boost::any(*word);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("word") != m.end() && !m["word"].empty()) {
      word = make_shared<string>(boost::any_cast<string>(m["word"]));
    }
  }


  virtual ~ListUserAnalyzerEntriesRequest() = default;
};
class ListUserAnalyzerEntriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  ListUserAnalyzerEntriesResponseBody() {}

  explicit ListUserAnalyzerEntriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ListUserAnalyzerEntriesResponseBody() = default;
};
class ListUserAnalyzerEntriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUserAnalyzerEntriesResponseBody> body{};

  ListUserAnalyzerEntriesResponse() {}

  explicit ListUserAnalyzerEntriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListUserAnalyzerEntriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserAnalyzerEntriesResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserAnalyzerEntriesResponse() = default;
};
class ListUserAnalyzersRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListUserAnalyzersRequest() {}

  explicit ListUserAnalyzersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListUserAnalyzersRequest() = default;
};
class ListUserAnalyzersResponseBodyResultDicts : public Darabonba::Model {
public:
  shared_ptr<bool> available{};
  shared_ptr<long> created{};
  shared_ptr<long> entriesCount{};
  shared_ptr<long> entriesLimit{};
  shared_ptr<string> id{};
  shared_ptr<string> type{};
  shared_ptr<long> updated{};

  ListUserAnalyzersResponseBodyResultDicts() {}

  explicit ListUserAnalyzersResponseBodyResultDicts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (available) {
      res["available"] = boost::any(*available);
    }
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (entriesCount) {
      res["entriesCount"] = boost::any(*entriesCount);
    }
    if (entriesLimit) {
      res["entriesLimit"] = boost::any(*entriesLimit);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("available") != m.end() && !m["available"].empty()) {
      available = make_shared<bool>(boost::any_cast<bool>(m["available"]));
    }
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<long>(boost::any_cast<long>(m["created"]));
    }
    if (m.find("entriesCount") != m.end() && !m["entriesCount"].empty()) {
      entriesCount = make_shared<long>(boost::any_cast<long>(m["entriesCount"]));
    }
    if (m.find("entriesLimit") != m.end() && !m["entriesLimit"].empty()) {
      entriesLimit = make_shared<long>(boost::any_cast<long>(m["entriesLimit"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<long>(boost::any_cast<long>(m["updated"]));
    }
  }


  virtual ~ListUserAnalyzersResponseBodyResultDicts() = default;
};
class ListUserAnalyzersResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> available{};
  shared_ptr<string> business{};
  shared_ptr<long> created{};
  shared_ptr<vector<ListUserAnalyzersResponseBodyResultDicts>> dicts{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<long> updated{};

  ListUserAnalyzersResponseBodyResult() {}

  explicit ListUserAnalyzersResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (available) {
      res["available"] = boost::any(*available);
    }
    if (business) {
      res["business"] = boost::any(*business);
    }
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (dicts) {
      vector<boost::any> temp1;
      for(auto item1:*dicts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["dicts"] = boost::any(temp1);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("available") != m.end() && !m["available"].empty()) {
      available = make_shared<bool>(boost::any_cast<bool>(m["available"]));
    }
    if (m.find("business") != m.end() && !m["business"].empty()) {
      business = make_shared<string>(boost::any_cast<string>(m["business"]));
    }
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<long>(boost::any_cast<long>(m["created"]));
    }
    if (m.find("dicts") != m.end() && !m["dicts"].empty()) {
      if (typeid(vector<boost::any>) == m["dicts"].type()) {
        vector<ListUserAnalyzersResponseBodyResultDicts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["dicts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserAnalyzersResponseBodyResultDicts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dicts = make_shared<vector<ListUserAnalyzersResponseBodyResultDicts>>(expect1);
      }
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<long>(boost::any_cast<long>(m["updated"]));
    }
  }


  virtual ~ListUserAnalyzersResponseBodyResult() = default;
};
class ListUserAnalyzersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListUserAnalyzersResponseBodyResult>> result{};
  shared_ptr<long> totalCount{};

  ListUserAnalyzersResponseBody() {}

  explicit ListUserAnalyzersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListUserAnalyzersResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserAnalyzersResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListUserAnalyzersResponseBodyResult>>(expect1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListUserAnalyzersResponseBody() = default;
};
class ListUserAnalyzersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUserAnalyzersResponseBody> body{};

  ListUserAnalyzersResponse() {}

  explicit ListUserAnalyzersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListUserAnalyzersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserAnalyzersResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserAnalyzersResponse() = default;
};
class ModifyAppGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> currentVersion{};
  shared_ptr<string> description{};
  shared_ptr<string> domain{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<bool> dryRun{};

  ModifyAppGroupRequest() {}

  explicit ModifyAppGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentVersion) {
      res["currentVersion"] = boost::any(*currentVersion);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (dryRun) {
      res["dryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currentVersion") != m.end() && !m["currentVersion"].empty()) {
      currentVersion = make_shared<string>(boost::any_cast<string>(m["currentVersion"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("dryRun") != m.end() && !m["dryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["dryRun"]));
    }
  }


  virtual ~ModifyAppGroupRequest() = default;
};
class ModifyAppGroupResponseBodyResultQuota : public Darabonba::Model {
public:
  shared_ptr<long> computeResource{};
  shared_ptr<long> docSize{};
  shared_ptr<string> spec{};

  ModifyAppGroupResponseBodyResultQuota() {}

  explicit ModifyAppGroupResponseBodyResultQuota(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (computeResource) {
      res["computeResource"] = boost::any(*computeResource);
    }
    if (docSize) {
      res["docSize"] = boost::any(*docSize);
    }
    if (spec) {
      res["spec"] = boost::any(*spec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("computeResource") != m.end() && !m["computeResource"].empty()) {
      computeResource = make_shared<long>(boost::any_cast<long>(m["computeResource"]));
    }
    if (m.find("docSize") != m.end() && !m["docSize"].empty()) {
      docSize = make_shared<long>(boost::any_cast<long>(m["docSize"]));
    }
    if (m.find("spec") != m.end() && !m["spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["spec"]));
    }
  }


  virtual ~ModifyAppGroupResponseBodyResultQuota() = default;
};
class ModifyAppGroupResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<long> chargingWay{};
  shared_ptr<string> commodityCode{};
  shared_ptr<long> created{};
  shared_ptr<string> currentVersion{};
  shared_ptr<string> description{};
  shared_ptr<string> domain{};
  shared_ptr<string> expireOn{};
  shared_ptr<long> firstRankAlgoDeploymentId{};
  shared_ptr<long> hasPendingQuotaReviewTask{};
  shared_ptr<string> id{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> lockMode{};
  shared_ptr<long> lockedByExpiration{};
  shared_ptr<string> name{};
  shared_ptr<long> pendingSecondRankAlgoDeploymentId{};
  shared_ptr<string> processingOrderId{};
  shared_ptr<long> produced{};
  shared_ptr<string> projectId{};
  shared_ptr<ModifyAppGroupResponseBodyResultQuota> quota{};
  shared_ptr<long> secondRankAlgoDeploymentId{};
  shared_ptr<string> status{};
  shared_ptr<long> switchedTime{};
  shared_ptr<string> type{};
  shared_ptr<long> updated{};

  ModifyAppGroupResponseBodyResult() {}

  explicit ModifyAppGroupResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["chargeType"] = boost::any(*chargeType);
    }
    if (chargingWay) {
      res["chargingWay"] = boost::any(*chargingWay);
    }
    if (commodityCode) {
      res["commodityCode"] = boost::any(*commodityCode);
    }
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (currentVersion) {
      res["currentVersion"] = boost::any(*currentVersion);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    if (expireOn) {
      res["expireOn"] = boost::any(*expireOn);
    }
    if (firstRankAlgoDeploymentId) {
      res["firstRankAlgoDeploymentId"] = boost::any(*firstRankAlgoDeploymentId);
    }
    if (hasPendingQuotaReviewTask) {
      res["hasPendingQuotaReviewTask"] = boost::any(*hasPendingQuotaReviewTask);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (lockMode) {
      res["lockMode"] = boost::any(*lockMode);
    }
    if (lockedByExpiration) {
      res["lockedByExpiration"] = boost::any(*lockedByExpiration);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (pendingSecondRankAlgoDeploymentId) {
      res["pendingSecondRankAlgoDeploymentId"] = boost::any(*pendingSecondRankAlgoDeploymentId);
    }
    if (processingOrderId) {
      res["processingOrderId"] = boost::any(*processingOrderId);
    }
    if (produced) {
      res["produced"] = boost::any(*produced);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (quota) {
      res["quota"] = quota ? boost::any(quota->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (secondRankAlgoDeploymentId) {
      res["secondRankAlgoDeploymentId"] = boost::any(*secondRankAlgoDeploymentId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (switchedTime) {
      res["switchedTime"] = boost::any(*switchedTime);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chargeType") != m.end() && !m["chargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["chargeType"]));
    }
    if (m.find("chargingWay") != m.end() && !m["chargingWay"].empty()) {
      chargingWay = make_shared<long>(boost::any_cast<long>(m["chargingWay"]));
    }
    if (m.find("commodityCode") != m.end() && !m["commodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["commodityCode"]));
    }
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<long>(boost::any_cast<long>(m["created"]));
    }
    if (m.find("currentVersion") != m.end() && !m["currentVersion"].empty()) {
      currentVersion = make_shared<string>(boost::any_cast<string>(m["currentVersion"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
    if (m.find("expireOn") != m.end() && !m["expireOn"].empty()) {
      expireOn = make_shared<string>(boost::any_cast<string>(m["expireOn"]));
    }
    if (m.find("firstRankAlgoDeploymentId") != m.end() && !m["firstRankAlgoDeploymentId"].empty()) {
      firstRankAlgoDeploymentId = make_shared<long>(boost::any_cast<long>(m["firstRankAlgoDeploymentId"]));
    }
    if (m.find("hasPendingQuotaReviewTask") != m.end() && !m["hasPendingQuotaReviewTask"].empty()) {
      hasPendingQuotaReviewTask = make_shared<long>(boost::any_cast<long>(m["hasPendingQuotaReviewTask"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("lockMode") != m.end() && !m["lockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["lockMode"]));
    }
    if (m.find("lockedByExpiration") != m.end() && !m["lockedByExpiration"].empty()) {
      lockedByExpiration = make_shared<long>(boost::any_cast<long>(m["lockedByExpiration"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("pendingSecondRankAlgoDeploymentId") != m.end() && !m["pendingSecondRankAlgoDeploymentId"].empty()) {
      pendingSecondRankAlgoDeploymentId = make_shared<long>(boost::any_cast<long>(m["pendingSecondRankAlgoDeploymentId"]));
    }
    if (m.find("processingOrderId") != m.end() && !m["processingOrderId"].empty()) {
      processingOrderId = make_shared<string>(boost::any_cast<string>(m["processingOrderId"]));
    }
    if (m.find("produced") != m.end() && !m["produced"].empty()) {
      produced = make_shared<long>(boost::any_cast<long>(m["produced"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("quota") != m.end() && !m["quota"].empty()) {
      if (typeid(map<string, boost::any>) == m["quota"].type()) {
        ModifyAppGroupResponseBodyResultQuota model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["quota"]));
        quota = make_shared<ModifyAppGroupResponseBodyResultQuota>(model1);
      }
    }
    if (m.find("secondRankAlgoDeploymentId") != m.end() && !m["secondRankAlgoDeploymentId"].empty()) {
      secondRankAlgoDeploymentId = make_shared<long>(boost::any_cast<long>(m["secondRankAlgoDeploymentId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("switchedTime") != m.end() && !m["switchedTime"].empty()) {
      switchedTime = make_shared<long>(boost::any_cast<long>(m["switchedTime"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<long>(boost::any_cast<long>(m["updated"]));
    }
  }


  virtual ~ModifyAppGroupResponseBodyResult() = default;
};
class ModifyAppGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ModifyAppGroupResponseBodyResult> result{};

  ModifyAppGroupResponseBody() {}

  explicit ModifyAppGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        ModifyAppGroupResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<ModifyAppGroupResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ModifyAppGroupResponseBody() = default;
};
class ModifyAppGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAppGroupResponseBody> body{};

  ModifyAppGroupResponse() {}

  explicit ModifyAppGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyAppGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAppGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAppGroupResponse() = default;
};
class ModifyAppGroupQuotaRequest : public Darabonba::Model {
public:
  shared_ptr<Quota> body{};
  shared_ptr<bool> dryRun{};

  ModifyAppGroupQuotaRequest() {}

  explicit ModifyAppGroupQuotaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dryRun) {
      res["dryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Quota model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Quota>(model1);
      }
    }
    if (m.find("dryRun") != m.end() && !m["dryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["dryRun"]));
    }
  }


  virtual ~ModifyAppGroupQuotaRequest() = default;
};
class ModifyAppGroupQuotaResponseBodyResultQuota : public Darabonba::Model {
public:
  shared_ptr<long> computeResource{};
  shared_ptr<long> docSize{};
  shared_ptr<string> spec{};

  ModifyAppGroupQuotaResponseBodyResultQuota() {}

  explicit ModifyAppGroupQuotaResponseBodyResultQuota(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (computeResource) {
      res["computeResource"] = boost::any(*computeResource);
    }
    if (docSize) {
      res["docSize"] = boost::any(*docSize);
    }
    if (spec) {
      res["spec"] = boost::any(*spec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("computeResource") != m.end() && !m["computeResource"].empty()) {
      computeResource = make_shared<long>(boost::any_cast<long>(m["computeResource"]));
    }
    if (m.find("docSize") != m.end() && !m["docSize"].empty()) {
      docSize = make_shared<long>(boost::any_cast<long>(m["docSize"]));
    }
    if (m.find("spec") != m.end() && !m["spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["spec"]));
    }
  }


  virtual ~ModifyAppGroupQuotaResponseBodyResultQuota() = default;
};
class ModifyAppGroupQuotaResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<long> chargingWay{};
  shared_ptr<string> commodityCode{};
  shared_ptr<long> created{};
  shared_ptr<string> currentVersion{};
  shared_ptr<string> description{};
  shared_ptr<string> expireOn{};
  shared_ptr<long> firstRankAlgoDeploymentId{};
  shared_ptr<long> hasPendingQuotaReviewTask{};
  shared_ptr<string> id{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> lockMode{};
  shared_ptr<long> lockedByExpiration{};
  shared_ptr<string> name{};
  shared_ptr<long> pendingSecondRankAlgoDeploymentId{};
  shared_ptr<string> processingOrderId{};
  shared_ptr<long> produced{};
  shared_ptr<string> projectId{};
  shared_ptr<ModifyAppGroupQuotaResponseBodyResultQuota> quota{};
  shared_ptr<long> secondRankAlgoDeploymentId{};
  shared_ptr<string> status{};
  shared_ptr<long> switchedTime{};
  shared_ptr<string> type{};
  shared_ptr<long> updated{};

  ModifyAppGroupQuotaResponseBodyResult() {}

  explicit ModifyAppGroupQuotaResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["chargeType"] = boost::any(*chargeType);
    }
    if (chargingWay) {
      res["chargingWay"] = boost::any(*chargingWay);
    }
    if (commodityCode) {
      res["commodityCode"] = boost::any(*commodityCode);
    }
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (currentVersion) {
      res["currentVersion"] = boost::any(*currentVersion);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (expireOn) {
      res["expireOn"] = boost::any(*expireOn);
    }
    if (firstRankAlgoDeploymentId) {
      res["firstRankAlgoDeploymentId"] = boost::any(*firstRankAlgoDeploymentId);
    }
    if (hasPendingQuotaReviewTask) {
      res["hasPendingQuotaReviewTask"] = boost::any(*hasPendingQuotaReviewTask);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (lockMode) {
      res["lockMode"] = boost::any(*lockMode);
    }
    if (lockedByExpiration) {
      res["lockedByExpiration"] = boost::any(*lockedByExpiration);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (pendingSecondRankAlgoDeploymentId) {
      res["pendingSecondRankAlgoDeploymentId"] = boost::any(*pendingSecondRankAlgoDeploymentId);
    }
    if (processingOrderId) {
      res["processingOrderId"] = boost::any(*processingOrderId);
    }
    if (produced) {
      res["produced"] = boost::any(*produced);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (quota) {
      res["quota"] = quota ? boost::any(quota->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (secondRankAlgoDeploymentId) {
      res["secondRankAlgoDeploymentId"] = boost::any(*secondRankAlgoDeploymentId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (switchedTime) {
      res["switchedTime"] = boost::any(*switchedTime);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chargeType") != m.end() && !m["chargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["chargeType"]));
    }
    if (m.find("chargingWay") != m.end() && !m["chargingWay"].empty()) {
      chargingWay = make_shared<long>(boost::any_cast<long>(m["chargingWay"]));
    }
    if (m.find("commodityCode") != m.end() && !m["commodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["commodityCode"]));
    }
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<long>(boost::any_cast<long>(m["created"]));
    }
    if (m.find("currentVersion") != m.end() && !m["currentVersion"].empty()) {
      currentVersion = make_shared<string>(boost::any_cast<string>(m["currentVersion"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("expireOn") != m.end() && !m["expireOn"].empty()) {
      expireOn = make_shared<string>(boost::any_cast<string>(m["expireOn"]));
    }
    if (m.find("firstRankAlgoDeploymentId") != m.end() && !m["firstRankAlgoDeploymentId"].empty()) {
      firstRankAlgoDeploymentId = make_shared<long>(boost::any_cast<long>(m["firstRankAlgoDeploymentId"]));
    }
    if (m.find("hasPendingQuotaReviewTask") != m.end() && !m["hasPendingQuotaReviewTask"].empty()) {
      hasPendingQuotaReviewTask = make_shared<long>(boost::any_cast<long>(m["hasPendingQuotaReviewTask"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("lockMode") != m.end() && !m["lockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["lockMode"]));
    }
    if (m.find("lockedByExpiration") != m.end() && !m["lockedByExpiration"].empty()) {
      lockedByExpiration = make_shared<long>(boost::any_cast<long>(m["lockedByExpiration"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("pendingSecondRankAlgoDeploymentId") != m.end() && !m["pendingSecondRankAlgoDeploymentId"].empty()) {
      pendingSecondRankAlgoDeploymentId = make_shared<long>(boost::any_cast<long>(m["pendingSecondRankAlgoDeploymentId"]));
    }
    if (m.find("processingOrderId") != m.end() && !m["processingOrderId"].empty()) {
      processingOrderId = make_shared<string>(boost::any_cast<string>(m["processingOrderId"]));
    }
    if (m.find("produced") != m.end() && !m["produced"].empty()) {
      produced = make_shared<long>(boost::any_cast<long>(m["produced"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("quota") != m.end() && !m["quota"].empty()) {
      if (typeid(map<string, boost::any>) == m["quota"].type()) {
        ModifyAppGroupQuotaResponseBodyResultQuota model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["quota"]));
        quota = make_shared<ModifyAppGroupQuotaResponseBodyResultQuota>(model1);
      }
    }
    if (m.find("secondRankAlgoDeploymentId") != m.end() && !m["secondRankAlgoDeploymentId"].empty()) {
      secondRankAlgoDeploymentId = make_shared<long>(boost::any_cast<long>(m["secondRankAlgoDeploymentId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("switchedTime") != m.end() && !m["switchedTime"].empty()) {
      switchedTime = make_shared<long>(boost::any_cast<long>(m["switchedTime"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<long>(boost::any_cast<long>(m["updated"]));
    }
  }


  virtual ~ModifyAppGroupQuotaResponseBodyResult() = default;
};
class ModifyAppGroupQuotaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ModifyAppGroupQuotaResponseBodyResult> result{};

  ModifyAppGroupQuotaResponseBody() {}

  explicit ModifyAppGroupQuotaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        ModifyAppGroupQuotaResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<ModifyAppGroupQuotaResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ModifyAppGroupQuotaResponseBody() = default;
};
class ModifyAppGroupQuotaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAppGroupQuotaResponseBody> body{};

  ModifyAppGroupQuotaResponse() {}

  explicit ModifyAppGroupQuotaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyAppGroupQuotaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAppGroupQuotaResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAppGroupQuotaResponse() = default;
};
class ModifyFirstRankRequest : public Darabonba::Model {
public:
  shared_ptr<FirstRank> body{};
  shared_ptr<bool> dryRun{};

  ModifyFirstRankRequest() {}

  explicit ModifyFirstRankRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dryRun) {
      res["dryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        FirstRank model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FirstRank>(model1);
      }
    }
    if (m.find("dryRun") != m.end() && !m["dryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["dryRun"]));
    }
  }


  virtual ~ModifyFirstRankRequest() = default;
};
class ModifyFirstRankResponseBodyResultMeta : public Darabonba::Model {
public:
  shared_ptr<string> arg{};
  shared_ptr<string> attribute{};
  shared_ptr<double> weight{};

  ModifyFirstRankResponseBodyResultMeta() {}

  explicit ModifyFirstRankResponseBodyResultMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arg) {
      res["arg"] = boost::any(*arg);
    }
    if (attribute) {
      res["attribute"] = boost::any(*attribute);
    }
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arg") != m.end() && !m["arg"].empty()) {
      arg = make_shared<string>(boost::any_cast<string>(m["arg"]));
    }
    if (m.find("attribute") != m.end() && !m["attribute"].empty()) {
      attribute = make_shared<string>(boost::any_cast<string>(m["attribute"]));
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<double>(boost::any_cast<double>(m["weight"]));
    }
  }


  virtual ~ModifyFirstRankResponseBodyResultMeta() = default;
};
class ModifyFirstRankResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<string> description{};
  shared_ptr<vector<ModifyFirstRankResponseBodyResultMeta>> meta{};
  shared_ptr<string> name{};

  ModifyFirstRankResponseBodyResult() {}

  explicit ModifyFirstRankResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["active"] = boost::any(*active);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (meta) {
      vector<boost::any> temp1;
      for(auto item1:*meta){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["meta"] = boost::any(temp1);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("active") != m.end() && !m["active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["active"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("meta") != m.end() && !m["meta"].empty()) {
      if (typeid(vector<boost::any>) == m["meta"].type()) {
        vector<ModifyFirstRankResponseBodyResultMeta> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["meta"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyFirstRankResponseBodyResultMeta model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        meta = make_shared<vector<ModifyFirstRankResponseBodyResultMeta>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~ModifyFirstRankResponseBodyResult() = default;
};
class ModifyFirstRankResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ModifyFirstRankResponseBodyResult> result{};

  ModifyFirstRankResponseBody() {}

  explicit ModifyFirstRankResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        ModifyFirstRankResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<ModifyFirstRankResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ModifyFirstRankResponseBody() = default;
};
class ModifyFirstRankResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyFirstRankResponseBody> body{};

  ModifyFirstRankResponse() {}

  explicit ModifyFirstRankResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyFirstRankResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyFirstRankResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyFirstRankResponse() = default;
};
class ModifyQueryProcessorRequest : public Darabonba::Model {
public:
  shared_ptr<boost::any> body{};
  shared_ptr<bool> dryRun{};

  ModifyQueryProcessorRequest() {}

  explicit ModifyQueryProcessorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    if (dryRun) {
      res["dryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<boost::any>(boost::any_cast<boost::any>(m["body"]));
    }
    if (m.find("dryRun") != m.end() && !m["dryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["dryRun"]));
    }
  }


  virtual ~ModifyQueryProcessorRequest() = default;
};
class ModifyQueryProcessorResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<long> created{};
  shared_ptr<string> domain{};
  shared_ptr<vector<string>> indexes{};
  shared_ptr<string> name{};
  shared_ptr<vector<map<string, boost::any>>> processors{};
  shared_ptr<long> updated{};

  ModifyQueryProcessorResponseBodyResult() {}

  explicit ModifyQueryProcessorResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["active"] = boost::any(*active);
    }
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    if (indexes) {
      res["indexes"] = boost::any(*indexes);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (processors) {
      res["processors"] = boost::any(*processors);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("active") != m.end() && !m["active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["active"]));
    }
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<long>(boost::any_cast<long>(m["created"]));
    }
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
    if (m.find("indexes") != m.end() && !m["indexes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["indexes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["indexes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      indexes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("processors") != m.end() && !m["processors"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["processors"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["processors"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      processors = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<long>(boost::any_cast<long>(m["updated"]));
    }
  }


  virtual ~ModifyQueryProcessorResponseBodyResult() = default;
};
class ModifyQueryProcessorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ModifyQueryProcessorResponseBodyResult> result{};

  ModifyQueryProcessorResponseBody() {}

  explicit ModifyQueryProcessorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        ModifyQueryProcessorResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<ModifyQueryProcessorResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ModifyQueryProcessorResponseBody() = default;
};
class ModifyQueryProcessorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyQueryProcessorResponseBody> body{};

  ModifyQueryProcessorResponse() {}

  explicit ModifyQueryProcessorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyQueryProcessorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyQueryProcessorResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyQueryProcessorResponse() = default;
};
class ModifyScheduledTaskRequest : public Darabonba::Model {
public:
  shared_ptr<boost::any> body{};

  ModifyScheduledTaskRequest() {}

  explicit ModifyScheduledTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<boost::any>(boost::any_cast<boost::any>(m["body"]));
    }
  }


  virtual ~ModifyScheduledTaskRequest() = default;
};
class ModifyScheduledTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  ModifyScheduledTaskResponseBody() {}

  explicit ModifyScheduledTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ModifyScheduledTaskResponseBody() = default;
};
class ModifyScheduledTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyScheduledTaskResponseBody> body{};

  ModifyScheduledTaskResponse() {}

  explicit ModifyScheduledTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyScheduledTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyScheduledTaskResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyScheduledTaskResponse() = default;
};
class ModifySecondRankRequest : public Darabonba::Model {
public:
  shared_ptr<SecondRank> body{};
  shared_ptr<bool> dryRun{};

  ModifySecondRankRequest() {}

  explicit ModifySecondRankRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dryRun) {
      res["dryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SecondRank model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SecondRank>(model1);
      }
    }
    if (m.find("dryRun") != m.end() && !m["dryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["dryRun"]));
    }
  }


  virtual ~ModifySecondRankRequest() = default;
};
class ModifySecondRankResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<long> created{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> isDefault{};
  shared_ptr<string> isSys{};
  shared_ptr<string> meta{};
  shared_ptr<string> name{};
  shared_ptr<long> updated{};

  ModifySecondRankResponseBodyResult() {}

  explicit ModifySecondRankResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["active"] = boost::any(*active);
    }
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (isDefault) {
      res["isDefault"] = boost::any(*isDefault);
    }
    if (isSys) {
      res["isSys"] = boost::any(*isSys);
    }
    if (meta) {
      res["meta"] = boost::any(*meta);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("active") != m.end() && !m["active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["active"]));
    }
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<long>(boost::any_cast<long>(m["created"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("isDefault") != m.end() && !m["isDefault"].empty()) {
      isDefault = make_shared<string>(boost::any_cast<string>(m["isDefault"]));
    }
    if (m.find("isSys") != m.end() && !m["isSys"].empty()) {
      isSys = make_shared<string>(boost::any_cast<string>(m["isSys"]));
    }
    if (m.find("meta") != m.end() && !m["meta"].empty()) {
      meta = make_shared<string>(boost::any_cast<string>(m["meta"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<long>(boost::any_cast<long>(m["updated"]));
    }
  }


  virtual ~ModifySecondRankResponseBodyResult() = default;
};
class ModifySecondRankResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ModifySecondRankResponseBodyResult> result{};

  ModifySecondRankResponseBody() {}

  explicit ModifySecondRankResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        ModifySecondRankResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<ModifySecondRankResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ModifySecondRankResponseBody() = default;
};
class ModifySecondRankResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifySecondRankResponseBody> body{};

  ModifySecondRankResponse() {}

  explicit ModifySecondRankResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifySecondRankResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifySecondRankResponseBody>(model1);
      }
    }
  }


  virtual ~ModifySecondRankResponse() = default;
};
class PreviewModelRequest : public Darabonba::Model {
public:
  shared_ptr<string> query{};

  PreviewModelRequest() {}

  explicit PreviewModelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (query) {
      res["query"] = boost::any(*query);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("query") != m.end() && !m["query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["query"]));
    }
  }


  virtual ~PreviewModelRequest() = default;
};
class PreviewModelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<map<string, boost::any>>> result{};
  shared_ptr<long> totalCount{};

  PreviewModelResponseBody() {}

  explicit PreviewModelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["result"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      result = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~PreviewModelResponseBody() = default;
};
class PreviewModelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PreviewModelResponseBody> body{};

  PreviewModelResponse() {}

  explicit PreviewModelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PreviewModelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PreviewModelResponseBody>(model1);
      }
    }
  }


  virtual ~PreviewModelResponse() = default;
};
class PushInterventionDictionaryEntriesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, boost::any>>> body{};
  shared_ptr<bool> dryRun{};

  PushInterventionDictionaryEntriesRequest() {}

  explicit PushInterventionDictionaryEntriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    if (dryRun) {
      res["dryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["body"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      body = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("dryRun") != m.end() && !m["dryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["dryRun"]));
    }
  }


  virtual ~PushInterventionDictionaryEntriesRequest() = default;
};
class PushInterventionDictionaryEntriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> result{};

  PushInterventionDictionaryEntriesResponseBody() {}

  explicit PushInterventionDictionaryEntriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["result"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      result = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~PushInterventionDictionaryEntriesResponseBody() = default;
};
class PushInterventionDictionaryEntriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PushInterventionDictionaryEntriesResponseBody> body{};

  PushInterventionDictionaryEntriesResponse() {}

  explicit PushInterventionDictionaryEntriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PushInterventionDictionaryEntriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PushInterventionDictionaryEntriesResponseBody>(model1);
      }
    }
  }


  virtual ~PushInterventionDictionaryEntriesResponse() = default;
};
class PushUserAnalyzerEntriesRequestEntries : public Darabonba::Model {
public:
  shared_ptr<string> cmd{};
  shared_ptr<string> key{};
  shared_ptr<bool> splitEnabled{};
  shared_ptr<string> value{};

  PushUserAnalyzerEntriesRequestEntries() {}

  explicit PushUserAnalyzerEntriesRequestEntries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cmd) {
      res["cmd"] = boost::any(*cmd);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (splitEnabled) {
      res["splitEnabled"] = boost::any(*splitEnabled);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cmd") != m.end() && !m["cmd"].empty()) {
      cmd = make_shared<string>(boost::any_cast<string>(m["cmd"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("splitEnabled") != m.end() && !m["splitEnabled"].empty()) {
      splitEnabled = make_shared<bool>(boost::any_cast<bool>(m["splitEnabled"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~PushUserAnalyzerEntriesRequestEntries() = default;
};
class PushUserAnalyzerEntriesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<PushUserAnalyzerEntriesRequestEntries>> entries{};
  shared_ptr<bool> dryRun{};

  PushUserAnalyzerEntriesRequest() {}

  explicit PushUserAnalyzerEntriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entries) {
      vector<boost::any> temp1;
      for(auto item1:*entries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["entries"] = boost::any(temp1);
    }
    if (dryRun) {
      res["dryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("entries") != m.end() && !m["entries"].empty()) {
      if (typeid(vector<boost::any>) == m["entries"].type()) {
        vector<PushUserAnalyzerEntriesRequestEntries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["entries"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PushUserAnalyzerEntriesRequestEntries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        entries = make_shared<vector<PushUserAnalyzerEntriesRequestEntries>>(expect1);
      }
    }
    if (m.find("dryRun") != m.end() && !m["dryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["dryRun"]));
    }
  }


  virtual ~PushUserAnalyzerEntriesRequest() = default;
};
class PushUserAnalyzerEntriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  PushUserAnalyzerEntriesResponseBody() {}

  explicit PushUserAnalyzerEntriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~PushUserAnalyzerEntriesResponseBody() = default;
};
class PushUserAnalyzerEntriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PushUserAnalyzerEntriesResponseBody> body{};

  PushUserAnalyzerEntriesResponse() {}

  explicit PushUserAnalyzerEntriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PushUserAnalyzerEntriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PushUserAnalyzerEntriesResponseBody>(model1);
      }
    }
  }


  virtual ~PushUserAnalyzerEntriesResponse() = default;
};
class RankPreviewQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RankPreviewQueryResponseBody() {}

  explicit RankPreviewQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~RankPreviewQueryResponseBody() = default;
};
class RankPreviewQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RankPreviewQueryResponseBody> body{};

  RankPreviewQueryResponse() {}

  explicit RankPreviewQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RankPreviewQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RankPreviewQueryResponseBody>(model1);
      }
    }
  }


  virtual ~RankPreviewQueryResponse() = default;
};
class ReleaseSortScriptResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ReleaseSortScriptResponseBody() {}

  explicit ReleaseSortScriptResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ReleaseSortScriptResponseBody() = default;
};
class ReleaseSortScriptResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReleaseSortScriptResponseBody> body{};

  ReleaseSortScriptResponse() {}

  explicit ReleaseSortScriptResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ReleaseSortScriptResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleaseSortScriptResponseBody>(model1);
      }
    }
  }


  virtual ~ReleaseSortScriptResponse() = default;
};
class RemoveAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<long>> result{};

  RemoveAppResponseBody() {}

  explicit RemoveAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["result"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      result = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~RemoveAppResponseBody() = default;
};
class RemoveAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveAppResponseBody> body{};

  RemoveAppResponse() {}

  explicit RemoveAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveAppResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveAppResponse() = default;
};
class RemoveAppGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<long>> result{};

  RemoveAppGroupResponseBody() {}

  explicit RemoveAppGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["result"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      result = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~RemoveAppGroupResponseBody() = default;
};
class RemoveAppGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveAppGroupResponseBody> body{};

  RemoveAppGroupResponse() {}

  explicit RemoveAppGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveAppGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveAppGroupResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveAppGroupResponse() = default;
};
class RemoveDataCollectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};

  RemoveDataCollectionResponseBody() {}

  explicit RemoveDataCollectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["result"]));
    }
  }


  virtual ~RemoveDataCollectionResponseBody() = default;
};
class RemoveDataCollectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveDataCollectionResponseBody> body{};

  RemoveDataCollectionResponse() {}

  explicit RemoveDataCollectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveDataCollectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveDataCollectionResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveDataCollectionResponse() = default;
};
class RemoveFirstRankResponseBodyResultMeta : public Darabonba::Model {
public:
  shared_ptr<string> arg{};
  shared_ptr<string> attribute{};
  shared_ptr<double> weight{};

  RemoveFirstRankResponseBodyResultMeta() {}

  explicit RemoveFirstRankResponseBodyResultMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arg) {
      res["arg"] = boost::any(*arg);
    }
    if (attribute) {
      res["attribute"] = boost::any(*attribute);
    }
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arg") != m.end() && !m["arg"].empty()) {
      arg = make_shared<string>(boost::any_cast<string>(m["arg"]));
    }
    if (m.find("attribute") != m.end() && !m["attribute"].empty()) {
      attribute = make_shared<string>(boost::any_cast<string>(m["attribute"]));
    }
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<double>(boost::any_cast<double>(m["weight"]));
    }
  }


  virtual ~RemoveFirstRankResponseBodyResultMeta() = default;
};
class RemoveFirstRankResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<string> description{};
  shared_ptr<vector<RemoveFirstRankResponseBodyResultMeta>> meta{};
  shared_ptr<string> name{};

  RemoveFirstRankResponseBodyResult() {}

  explicit RemoveFirstRankResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["active"] = boost::any(*active);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (meta) {
      vector<boost::any> temp1;
      for(auto item1:*meta){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["meta"] = boost::any(temp1);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("active") != m.end() && !m["active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["active"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("meta") != m.end() && !m["meta"].empty()) {
      if (typeid(vector<boost::any>) == m["meta"].type()) {
        vector<RemoveFirstRankResponseBodyResultMeta> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["meta"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RemoveFirstRankResponseBodyResultMeta model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        meta = make_shared<vector<RemoveFirstRankResponseBodyResultMeta>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~RemoveFirstRankResponseBodyResult() = default;
};
class RemoveFirstRankResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RemoveFirstRankResponseBodyResult> result{};

  RemoveFirstRankResponseBody() {}

  explicit RemoveFirstRankResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        RemoveFirstRankResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<RemoveFirstRankResponseBodyResult>(model1);
      }
    }
  }


  virtual ~RemoveFirstRankResponseBody() = default;
};
class RemoveFirstRankResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveFirstRankResponseBody> body{};

  RemoveFirstRankResponse() {}

  explicit RemoveFirstRankResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveFirstRankResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveFirstRankResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveFirstRankResponse() = default;
};
class RemoveInterventionDictionaryResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> analyzer{};
  shared_ptr<string> created{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> updated{};

  RemoveInterventionDictionaryResponseBodyResult() {}

  explicit RemoveInterventionDictionaryResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (analyzer) {
      res["analyzer"] = boost::any(*analyzer);
    }
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("analyzer") != m.end() && !m["analyzer"].empty()) {
      analyzer = make_shared<string>(boost::any_cast<string>(m["analyzer"]));
    }
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<string>(boost::any_cast<string>(m["created"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<string>(boost::any_cast<string>(m["updated"]));
    }
  }


  virtual ~RemoveInterventionDictionaryResponseBodyResult() = default;
};
class RemoveInterventionDictionaryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RemoveInterventionDictionaryResponseBodyResult> result{};

  RemoveInterventionDictionaryResponseBody() {}

  explicit RemoveInterventionDictionaryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        RemoveInterventionDictionaryResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<RemoveInterventionDictionaryResponseBodyResult>(model1);
      }
    }
  }


  virtual ~RemoveInterventionDictionaryResponseBody() = default;
};
class RemoveInterventionDictionaryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveInterventionDictionaryResponseBody> body{};

  RemoveInterventionDictionaryResponse() {}

  explicit RemoveInterventionDictionaryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveInterventionDictionaryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveInterventionDictionaryResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveInterventionDictionaryResponse() = default;
};
class RemoveQueryProcessorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};

  RemoveQueryProcessorResponseBody() {}

  explicit RemoveQueryProcessorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["result"]));
    }
  }


  virtual ~RemoveQueryProcessorResponseBody() = default;
};
class RemoveQueryProcessorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveQueryProcessorResponseBody> body{};

  RemoveQueryProcessorResponse() {}

  explicit RemoveQueryProcessorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveQueryProcessorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveQueryProcessorResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveQueryProcessorResponse() = default;
};
class RemoveScheduledTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<long>> result{};

  RemoveScheduledTaskResponseBody() {}

  explicit RemoveScheduledTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["result"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      result = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~RemoveScheduledTaskResponseBody() = default;
};
class RemoveScheduledTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveScheduledTaskResponseBody> body{};

  RemoveScheduledTaskResponse() {}

  explicit RemoveScheduledTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveScheduledTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveScheduledTaskResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveScheduledTaskResponse() = default;
};
class RemoveSearchStrategyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveSearchStrategyResponseBody() {}

  explicit RemoveSearchStrategyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~RemoveSearchStrategyResponseBody() = default;
};
class RemoveSearchStrategyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveSearchStrategyResponseBody> body{};

  RemoveSearchStrategyResponse() {}

  explicit RemoveSearchStrategyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveSearchStrategyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveSearchStrategyResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveSearchStrategyResponse() = default;
};
class RemoveSecondRankResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  RemoveSecondRankResponseBody() {}

  explicit RemoveSecondRankResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~RemoveSecondRankResponseBody() = default;
};
class RemoveSecondRankResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveSecondRankResponseBody> body{};

  RemoveSecondRankResponse() {}

  explicit RemoveSecondRankResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveSecondRankResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveSecondRankResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveSecondRankResponse() = default;
};
class RemoveUserAnalyzerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  RemoveUserAnalyzerResponseBody() {}

  explicit RemoveUserAnalyzerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~RemoveUserAnalyzerResponseBody() = default;
};
class RemoveUserAnalyzerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveUserAnalyzerResponseBody> body{};

  RemoveUserAnalyzerResponse() {}

  explicit RemoveUserAnalyzerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveUserAnalyzerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveUserAnalyzerResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveUserAnalyzerResponse() = default;
};
class RenewAppGroupRequest : public Darabonba::Model {
public:
  shared_ptr<PrepayOrderInfo> body{};
  shared_ptr<string> clientToken{};

  RenewAppGroupRequest() {}

  explicit RenewAppGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (clientToken) {
      res["clientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PrepayOrderInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PrepayOrderInfo>(model1);
      }
    }
    if (m.find("clientToken") != m.end() && !m["clientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["clientToken"]));
    }
  }


  virtual ~RenewAppGroupRequest() = default;
};
class RenewAppGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  RenewAppGroupResponseBody() {}

  explicit RenewAppGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["result"]));
    }
  }


  virtual ~RenewAppGroupResponseBody() = default;
};
class RenewAppGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RenewAppGroupResponseBody> body{};

  RenewAppGroupResponse() {}

  explicit RenewAppGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RenewAppGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RenewAppGroupResponseBody>(model1);
      }
    }
  }


  virtual ~RenewAppGroupResponse() = default;
};
class ReplaceAppGroupCommodityCodeResponseBodyResultQuota : public Darabonba::Model {
public:
  shared_ptr<long> computeResource{};
  shared_ptr<long> docSize{};
  shared_ptr<string> spec{};

  ReplaceAppGroupCommodityCodeResponseBodyResultQuota() {}

  explicit ReplaceAppGroupCommodityCodeResponseBodyResultQuota(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (computeResource) {
      res["computeResource"] = boost::any(*computeResource);
    }
    if (docSize) {
      res["docSize"] = boost::any(*docSize);
    }
    if (spec) {
      res["spec"] = boost::any(*spec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("computeResource") != m.end() && !m["computeResource"].empty()) {
      computeResource = make_shared<long>(boost::any_cast<long>(m["computeResource"]));
    }
    if (m.find("docSize") != m.end() && !m["docSize"].empty()) {
      docSize = make_shared<long>(boost::any_cast<long>(m["docSize"]));
    }
    if (m.find("spec") != m.end() && !m["spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["spec"]));
    }
  }


  virtual ~ReplaceAppGroupCommodityCodeResponseBodyResultQuota() = default;
};
class ReplaceAppGroupCommodityCodeResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<long> chargingWay{};
  shared_ptr<string> commodityCode{};
  shared_ptr<long> created{};
  shared_ptr<string> currentVersion{};
  shared_ptr<string> description{};
  shared_ptr<string> expireOn{};
  shared_ptr<long> firstRankAlgoDeploymentId{};
  shared_ptr<long> hasPendingQuotaReviewTask{};
  shared_ptr<string> id{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> lockMode{};
  shared_ptr<long> lockedByExpiration{};
  shared_ptr<string> name{};
  shared_ptr<long> pendingSecondRankAlgoDeploymentId{};
  shared_ptr<string> processingOrderId{};
  shared_ptr<long> produced{};
  shared_ptr<string> projectId{};
  shared_ptr<ReplaceAppGroupCommodityCodeResponseBodyResultQuota> quota{};
  shared_ptr<long> secondRankAlgoDeploymentId{};
  shared_ptr<string> status{};
  shared_ptr<long> switchedTime{};
  shared_ptr<string> type{};
  shared_ptr<long> updated{};
  shared_ptr<vector<string>> versions{};

  ReplaceAppGroupCommodityCodeResponseBodyResult() {}

  explicit ReplaceAppGroupCommodityCodeResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["chargeType"] = boost::any(*chargeType);
    }
    if (chargingWay) {
      res["chargingWay"] = boost::any(*chargingWay);
    }
    if (commodityCode) {
      res["commodityCode"] = boost::any(*commodityCode);
    }
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (currentVersion) {
      res["currentVersion"] = boost::any(*currentVersion);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (expireOn) {
      res["expireOn"] = boost::any(*expireOn);
    }
    if (firstRankAlgoDeploymentId) {
      res["firstRankAlgoDeploymentId"] = boost::any(*firstRankAlgoDeploymentId);
    }
    if (hasPendingQuotaReviewTask) {
      res["hasPendingQuotaReviewTask"] = boost::any(*hasPendingQuotaReviewTask);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (lockMode) {
      res["lockMode"] = boost::any(*lockMode);
    }
    if (lockedByExpiration) {
      res["lockedByExpiration"] = boost::any(*lockedByExpiration);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (pendingSecondRankAlgoDeploymentId) {
      res["pendingSecondRankAlgoDeploymentId"] = boost::any(*pendingSecondRankAlgoDeploymentId);
    }
    if (processingOrderId) {
      res["processingOrderId"] = boost::any(*processingOrderId);
    }
    if (produced) {
      res["produced"] = boost::any(*produced);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (quota) {
      res["quota"] = quota ? boost::any(quota->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (secondRankAlgoDeploymentId) {
      res["secondRankAlgoDeploymentId"] = boost::any(*secondRankAlgoDeploymentId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (switchedTime) {
      res["switchedTime"] = boost::any(*switchedTime);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    if (versions) {
      res["versions"] = boost::any(*versions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chargeType") != m.end() && !m["chargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["chargeType"]));
    }
    if (m.find("chargingWay") != m.end() && !m["chargingWay"].empty()) {
      chargingWay = make_shared<long>(boost::any_cast<long>(m["chargingWay"]));
    }
    if (m.find("commodityCode") != m.end() && !m["commodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["commodityCode"]));
    }
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<long>(boost::any_cast<long>(m["created"]));
    }
    if (m.find("currentVersion") != m.end() && !m["currentVersion"].empty()) {
      currentVersion = make_shared<string>(boost::any_cast<string>(m["currentVersion"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("expireOn") != m.end() && !m["expireOn"].empty()) {
      expireOn = make_shared<string>(boost::any_cast<string>(m["expireOn"]));
    }
    if (m.find("firstRankAlgoDeploymentId") != m.end() && !m["firstRankAlgoDeploymentId"].empty()) {
      firstRankAlgoDeploymentId = make_shared<long>(boost::any_cast<long>(m["firstRankAlgoDeploymentId"]));
    }
    if (m.find("hasPendingQuotaReviewTask") != m.end() && !m["hasPendingQuotaReviewTask"].empty()) {
      hasPendingQuotaReviewTask = make_shared<long>(boost::any_cast<long>(m["hasPendingQuotaReviewTask"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("lockMode") != m.end() && !m["lockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["lockMode"]));
    }
    if (m.find("lockedByExpiration") != m.end() && !m["lockedByExpiration"].empty()) {
      lockedByExpiration = make_shared<long>(boost::any_cast<long>(m["lockedByExpiration"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("pendingSecondRankAlgoDeploymentId") != m.end() && !m["pendingSecondRankAlgoDeploymentId"].empty()) {
      pendingSecondRankAlgoDeploymentId = make_shared<long>(boost::any_cast<long>(m["pendingSecondRankAlgoDeploymentId"]));
    }
    if (m.find("processingOrderId") != m.end() && !m["processingOrderId"].empty()) {
      processingOrderId = make_shared<string>(boost::any_cast<string>(m["processingOrderId"]));
    }
    if (m.find("produced") != m.end() && !m["produced"].empty()) {
      produced = make_shared<long>(boost::any_cast<long>(m["produced"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("quota") != m.end() && !m["quota"].empty()) {
      if (typeid(map<string, boost::any>) == m["quota"].type()) {
        ReplaceAppGroupCommodityCodeResponseBodyResultQuota model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["quota"]));
        quota = make_shared<ReplaceAppGroupCommodityCodeResponseBodyResultQuota>(model1);
      }
    }
    if (m.find("secondRankAlgoDeploymentId") != m.end() && !m["secondRankAlgoDeploymentId"].empty()) {
      secondRankAlgoDeploymentId = make_shared<long>(boost::any_cast<long>(m["secondRankAlgoDeploymentId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("switchedTime") != m.end() && !m["switchedTime"].empty()) {
      switchedTime = make_shared<long>(boost::any_cast<long>(m["switchedTime"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<long>(boost::any_cast<long>(m["updated"]));
    }
    if (m.find("versions") != m.end() && !m["versions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["versions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["versions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      versions = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ReplaceAppGroupCommodityCodeResponseBodyResult() = default;
};
class ReplaceAppGroupCommodityCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ReplaceAppGroupCommodityCodeResponseBodyResult> result{};

  ReplaceAppGroupCommodityCodeResponseBody() {}

  explicit ReplaceAppGroupCommodityCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        ReplaceAppGroupCommodityCodeResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<ReplaceAppGroupCommodityCodeResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ReplaceAppGroupCommodityCodeResponseBody() = default;
};
class ReplaceAppGroupCommodityCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReplaceAppGroupCommodityCodeResponseBody> body{};

  ReplaceAppGroupCommodityCodeResponse() {}

  explicit ReplaceAppGroupCommodityCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ReplaceAppGroupCommodityCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReplaceAppGroupCommodityCodeResponseBody>(model1);
      }
    }
  }


  virtual ~ReplaceAppGroupCommodityCodeResponse() = default;
};
class SaveSortScriptFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<long> version{};

  SaveSortScriptFileRequest() {}

  explicit SaveSortScriptFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<long>(boost::any_cast<long>(m["version"]));
    }
  }


  virtual ~SaveSortScriptFileRequest() = default;
};
class SaveSortScriptFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SaveSortScriptFileResponseBody() {}

  explicit SaveSortScriptFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~SaveSortScriptFileResponseBody() = default;
};
class SaveSortScriptFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveSortScriptFileResponseBody> body{};

  SaveSortScriptFileResponse() {}

  explicit SaveSortScriptFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveSortScriptFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveSortScriptFileResponseBody>(model1);
      }
    }
  }


  virtual ~SaveSortScriptFileResponse() = default;
};
class StartSlowQueryAnalyzerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  StartSlowQueryAnalyzerResponseBody() {}

  explicit StartSlowQueryAnalyzerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~StartSlowQueryAnalyzerResponseBody() = default;
};
class StartSlowQueryAnalyzerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartSlowQueryAnalyzerResponseBody> body{};

  StartSlowQueryAnalyzerResponse() {}

  explicit StartSlowQueryAnalyzerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StartSlowQueryAnalyzerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartSlowQueryAnalyzerResponseBody>(model1);
      }
    }
  }


  virtual ~StartSlowQueryAnalyzerResponse() = default;
};
class TagResourcesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  TagResourcesRequestTag() {}

  explicit TagResourcesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~TagResourcesRequestTag() = default;
};
class TagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<TagResourcesRequestTag>> tag{};

  TagResourcesRequest() {}

  explicit TagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      if (typeid(vector<boost::any>) == m["tag"].type()) {
        vector<TagResourcesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TagResourcesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<TagResourcesRequestTag>>(expect1);
      }
    }
  }


  virtual ~TagResourcesRequest() = default;
};
class TagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  TagResourcesResponseBody() {}

  explicit TagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~TagResourcesResponseBody() = default;
};
class TagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TagResourcesResponseBody> body{};

  TagResourcesResponse() {}

  explicit TagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        TagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~TagResourcesResponse() = default;
};
class UnbindESUserAnalyzerRequest : public Darabonba::Model {
public:
  shared_ptr<boost::any> body{};

  UnbindESUserAnalyzerRequest() {}

  explicit UnbindESUserAnalyzerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<boost::any>(boost::any_cast<boost::any>(m["body"]));
    }
  }


  virtual ~UnbindESUserAnalyzerRequest() = default;
};
class UnbindESUserAnalyzerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  UnbindESUserAnalyzerResponseBody() {}

  explicit UnbindESUserAnalyzerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~UnbindESUserAnalyzerResponseBody() = default;
};
class UnbindESUserAnalyzerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnbindESUserAnalyzerResponseBody> body{};

  UnbindESUserAnalyzerResponse() {}

  explicit UnbindESUserAnalyzerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UnbindESUserAnalyzerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnbindESUserAnalyzerResponseBody>(model1);
      }
    }
  }


  virtual ~UnbindESUserAnalyzerResponse() = default;
};
class UnbindEsInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  UnbindEsInstanceResponseBody() {}

  explicit UnbindEsInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~UnbindEsInstanceResponseBody() = default;
};
class UnbindEsInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnbindEsInstanceResponseBody> body{};

  UnbindEsInstanceResponse() {}

  explicit UnbindEsInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UnbindEsInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnbindEsInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~UnbindEsInstanceResponse() = default;
};
class UntagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> tagKey{};

  UntagResourcesRequest() {}

  explicit UntagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["all"] = boost::any(*all);
    }
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (tagKey) {
      res["tagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("all") != m.end() && !m["all"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["all"]));
    }
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
    if (m.find("tagKey") != m.end() && !m["tagKey"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["tagKey"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["tagKey"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagKey = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UntagResourcesRequest() = default;
};
class UntagResourcesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<string> resourceIdShrink{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagKeyShrink{};

  UntagResourcesShrinkRequest() {}

  explicit UntagResourcesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["all"] = boost::any(*all);
    }
    if (resourceIdShrink) {
      res["resourceId"] = boost::any(*resourceIdShrink);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (tagKeyShrink) {
      res["tagKey"] = boost::any(*tagKeyShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("all") != m.end() && !m["all"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["all"]));
    }
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      resourceIdShrink = make_shared<string>(boost::any_cast<string>(m["resourceId"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
    if (m.find("tagKey") != m.end() && !m["tagKey"].empty()) {
      tagKeyShrink = make_shared<string>(boost::any_cast<string>(m["tagKey"]));
    }
  }


  virtual ~UntagResourcesShrinkRequest() = default;
};
class UntagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> tequestId{};

  UntagResourcesResponseBody() {}

  explicit UntagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tequestId) {
      res["tequestId"] = boost::any(*tequestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tequestId") != m.end() && !m["tequestId"].empty()) {
      tequestId = make_shared<string>(boost::any_cast<string>(m["tequestId"]));
    }
  }


  virtual ~UntagResourcesResponseBody() = default;
};
class UntagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UntagResourcesResponseBody> body{};

  UntagResourcesResponse() {}

  explicit UntagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UntagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UntagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~UntagResourcesResponse() = default;
};
class UpdateABTestExperimentRequest : public Darabonba::Model {
public:
  shared_ptr<ABTestExperiment> body{};
  shared_ptr<bool> dryRun{};

  UpdateABTestExperimentRequest() {}

  explicit UpdateABTestExperimentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dryRun) {
      res["dryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ABTestExperiment model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ABTestExperiment>(model1);
      }
    }
    if (m.find("dryRun") != m.end() && !m["dryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["dryRun"]));
    }
  }


  virtual ~UpdateABTestExperimentRequest() = default;
};
class UpdateABTestExperimentResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> created{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<bool> online{};
  shared_ptr<map<string, boost::any>> params{};
  shared_ptr<long> traffic{};
  shared_ptr<long> updated{};

  UpdateABTestExperimentResponseBodyResult() {}

  explicit UpdateABTestExperimentResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (online) {
      res["online"] = boost::any(*online);
    }
    if (params) {
      res["params"] = boost::any(*params);
    }
    if (traffic) {
      res["traffic"] = boost::any(*traffic);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<long>(boost::any_cast<long>(m["created"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("online") != m.end() && !m["online"].empty()) {
      online = make_shared<bool>(boost::any_cast<bool>(m["online"]));
    }
    if (m.find("params") != m.end() && !m["params"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["params"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      params = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("traffic") != m.end() && !m["traffic"].empty()) {
      traffic = make_shared<long>(boost::any_cast<long>(m["traffic"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<long>(boost::any_cast<long>(m["updated"]));
    }
  }


  virtual ~UpdateABTestExperimentResponseBodyResult() = default;
};
class UpdateABTestExperimentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<UpdateABTestExperimentResponseBodyResult> result{};

  UpdateABTestExperimentResponseBody() {}

  explicit UpdateABTestExperimentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        UpdateABTestExperimentResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<UpdateABTestExperimentResponseBodyResult>(model1);
      }
    }
  }


  virtual ~UpdateABTestExperimentResponseBody() = default;
};
class UpdateABTestExperimentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateABTestExperimentResponseBody> body{};

  UpdateABTestExperimentResponse() {}

  explicit UpdateABTestExperimentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateABTestExperimentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateABTestExperimentResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateABTestExperimentResponse() = default;
};
class UpdateABTestFixedFlowDividersRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> body{};

  UpdateABTestFixedFlowDividersRequest() {}

  explicit UpdateABTestFixedFlowDividersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["body"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      body = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateABTestFixedFlowDividersRequest() = default;
};
class UpdateABTestFixedFlowDividersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> result{};

  UpdateABTestFixedFlowDividersResponseBody() {}

  explicit UpdateABTestFixedFlowDividersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["result"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      result = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateABTestFixedFlowDividersResponseBody() = default;
};
class UpdateABTestFixedFlowDividersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateABTestFixedFlowDividersResponseBody> body{};

  UpdateABTestFixedFlowDividersResponse() {}

  explicit UpdateABTestFixedFlowDividersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateABTestFixedFlowDividersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateABTestFixedFlowDividersResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateABTestFixedFlowDividersResponse() = default;
};
class UpdateABTestGroupRequest : public Darabonba::Model {
public:
  shared_ptr<ABTestGroup> body{};
  shared_ptr<bool> dryRun{};

  UpdateABTestGroupRequest() {}

  explicit UpdateABTestGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dryRun) {
      res["dryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ABTestGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ABTestGroup>(model1);
      }
    }
    if (m.find("dryRun") != m.end() && !m["dryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["dryRun"]));
    }
  }


  virtual ~UpdateABTestGroupRequest() = default;
};
class UpdateABTestGroupResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> created{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<long> status{};
  shared_ptr<long> updated{};

  UpdateABTestGroupResponseBodyResult() {}

  explicit UpdateABTestGroupResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<long>(boost::any_cast<long>(m["created"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<long>(boost::any_cast<long>(m["updated"]));
    }
  }


  virtual ~UpdateABTestGroupResponseBodyResult() = default;
};
class UpdateABTestGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<UpdateABTestGroupResponseBodyResult> result{};

  UpdateABTestGroupResponseBody() {}

  explicit UpdateABTestGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        UpdateABTestGroupResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<UpdateABTestGroupResponseBodyResult>(model1);
      }
    }
  }


  virtual ~UpdateABTestGroupResponseBody() = default;
};
class UpdateABTestGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateABTestGroupResponseBody> body{};

  UpdateABTestGroupResponse() {}

  explicit UpdateABTestGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateABTestGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateABTestGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateABTestGroupResponse() = default;
};
class UpdateABTestSceneRequest : public Darabonba::Model {
public:
  shared_ptr<ABTestScene> body{};
  shared_ptr<bool> dryRun{};

  UpdateABTestSceneRequest() {}

  explicit UpdateABTestSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dryRun) {
      res["dryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ABTestScene model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ABTestScene>(model1);
      }
    }
    if (m.find("dryRun") != m.end() && !m["dryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["dryRun"]));
    }
  }


  virtual ~UpdateABTestSceneRequest() = default;
};
class UpdateABTestSceneResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> created{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<bool> online{};
  shared_ptr<map<string, boost::any>> params{};
  shared_ptr<long> traffic{};
  shared_ptr<long> updated{};

  UpdateABTestSceneResponseBodyResult() {}

  explicit UpdateABTestSceneResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (online) {
      res["online"] = boost::any(*online);
    }
    if (params) {
      res["params"] = boost::any(*params);
    }
    if (traffic) {
      res["traffic"] = boost::any(*traffic);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<long>(boost::any_cast<long>(m["created"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("online") != m.end() && !m["online"].empty()) {
      online = make_shared<bool>(boost::any_cast<bool>(m["online"]));
    }
    if (m.find("params") != m.end() && !m["params"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["params"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      params = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("traffic") != m.end() && !m["traffic"].empty()) {
      traffic = make_shared<long>(boost::any_cast<long>(m["traffic"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<long>(boost::any_cast<long>(m["updated"]));
    }
  }


  virtual ~UpdateABTestSceneResponseBodyResult() = default;
};
class UpdateABTestSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<UpdateABTestSceneResponseBodyResult> result{};

  UpdateABTestSceneResponseBody() {}

  explicit UpdateABTestSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        UpdateABTestSceneResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<UpdateABTestSceneResponseBodyResult>(model1);
      }
    }
  }


  virtual ~UpdateABTestSceneResponseBody() = default;
};
class UpdateABTestSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateABTestSceneResponseBody> body{};

  UpdateABTestSceneResponse() {}

  explicit UpdateABTestSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateABTestSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateABTestSceneResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateABTestSceneResponse() = default;
};
class UpdateFetchFieldsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> body{};
  shared_ptr<bool> dryRun{};

  UpdateFetchFieldsRequest() {}

  explicit UpdateFetchFieldsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    if (dryRun) {
      res["dryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["body"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      body = make_shared<vector<string>>(toVec1);
    }
    if (m.find("dryRun") != m.end() && !m["dryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["dryRun"]));
    }
  }


  virtual ~UpdateFetchFieldsRequest() = default;
};
class UpdateFetchFieldsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  UpdateFetchFieldsResponseBody() {}

  explicit UpdateFetchFieldsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["result"]));
    }
  }


  virtual ~UpdateFetchFieldsResponseBody() = default;
};
class UpdateFetchFieldsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateFetchFieldsResponseBody> body{};

  UpdateFetchFieldsResponse() {}

  explicit UpdateFetchFieldsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateFetchFieldsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateFetchFieldsResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateFetchFieldsResponse() = default;
};
class UpdateFunctionDefaultInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceName{};

  UpdateFunctionDefaultInstanceRequest() {}

  explicit UpdateFunctionDefaultInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceName) {
      res["instanceName"] = boost::any(*instanceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("instanceName") != m.end() && !m["instanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["instanceName"]));
    }
  }


  virtual ~UpdateFunctionDefaultInstanceRequest() = default;
};
class UpdateFunctionDefaultInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpCode{};
  shared_ptr<long> latency{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  UpdateFunctionDefaultInstanceResponseBody() {}

  explicit UpdateFunctionDefaultInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (latency) {
      res["Latency"] = boost::any(*latency);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["HttpCode"]));
    }
    if (m.find("Latency") != m.end() && !m["Latency"].empty()) {
      latency = make_shared<long>(boost::any_cast<long>(m["Latency"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~UpdateFunctionDefaultInstanceResponseBody() = default;
};
class UpdateFunctionDefaultInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateFunctionDefaultInstanceResponseBody> body{};

  UpdateFunctionDefaultInstanceResponse() {}

  explicit UpdateFunctionDefaultInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateFunctionDefaultInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateFunctionDefaultInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateFunctionDefaultInstanceResponse() = default;
};
class UpdateFunctionInstanceRequestCreateParameters : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  UpdateFunctionInstanceRequestCreateParameters() {}

  explicit UpdateFunctionInstanceRequestCreateParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~UpdateFunctionInstanceRequestCreateParameters() = default;
};
class UpdateFunctionInstanceRequestUsageParameters : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  UpdateFunctionInstanceRequestUsageParameters() {}

  explicit UpdateFunctionInstanceRequestUsageParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~UpdateFunctionInstanceRequestUsageParameters() = default;
};
class UpdateFunctionInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateFunctionInstanceRequestCreateParameters>> createParameters{};
  shared_ptr<string> cron{};
  shared_ptr<string> description{};
  shared_ptr<vector<UpdateFunctionInstanceRequestUsageParameters>> usageParameters{};

  UpdateFunctionInstanceRequest() {}

  explicit UpdateFunctionInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createParameters) {
      vector<boost::any> temp1;
      for(auto item1:*createParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["createParameters"] = boost::any(temp1);
    }
    if (cron) {
      res["cron"] = boost::any(*cron);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (usageParameters) {
      vector<boost::any> temp1;
      for(auto item1:*usageParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["usageParameters"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createParameters") != m.end() && !m["createParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["createParameters"].type()) {
        vector<UpdateFunctionInstanceRequestCreateParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["createParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateFunctionInstanceRequestCreateParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        createParameters = make_shared<vector<UpdateFunctionInstanceRequestCreateParameters>>(expect1);
      }
    }
    if (m.find("cron") != m.end() && !m["cron"].empty()) {
      cron = make_shared<string>(boost::any_cast<string>(m["cron"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("usageParameters") != m.end() && !m["usageParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["usageParameters"].type()) {
        vector<UpdateFunctionInstanceRequestUsageParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["usageParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateFunctionInstanceRequestUsageParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        usageParameters = make_shared<vector<UpdateFunctionInstanceRequestUsageParameters>>(expect1);
      }
    }
  }


  virtual ~UpdateFunctionInstanceRequest() = default;
};
class UpdateFunctionInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpCode{};
  shared_ptr<long> latency{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  UpdateFunctionInstanceResponseBody() {}

  explicit UpdateFunctionInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (latency) {
      res["Latency"] = boost::any(*latency);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["HttpCode"]));
    }
    if (m.find("Latency") != m.end() && !m["Latency"].empty()) {
      latency = make_shared<long>(boost::any_cast<long>(m["Latency"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~UpdateFunctionInstanceResponseBody() = default;
};
class UpdateFunctionInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateFunctionInstanceResponseBody> body{};

  UpdateFunctionInstanceResponse() {}

  explicit UpdateFunctionInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateFunctionInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateFunctionInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateFunctionInstanceResponse() = default;
};
class UpdateSearchStrategyRequest : public Darabonba::Model {
public:
  shared_ptr<SearchStrategy> body{};

  UpdateSearchStrategyRequest() {}

  explicit UpdateSearchStrategyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SearchStrategy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchStrategy>(model1);
      }
    }
  }


  virtual ~UpdateSearchStrategyRequest() = default;
};
class UpdateSearchStrategyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateSearchStrategyResponseBody() {}

  explicit UpdateSearchStrategyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateSearchStrategyResponseBody() = default;
};
class UpdateSearchStrategyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateSearchStrategyResponseBody> body{};

  UpdateSearchStrategyResponse() {}

  explicit UpdateSearchStrategyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateSearchStrategyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSearchStrategyResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSearchStrategyResponse() = default;
};
class UpdateSortScriptResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateSortScriptResponseBody() {}

  explicit UpdateSortScriptResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateSortScriptResponseBody() = default;
};
class UpdateSortScriptResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateSortScriptResponseBody> body{};

  UpdateSortScriptResponse() {}

  explicit UpdateSortScriptResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateSortScriptResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSortScriptResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSortScriptResponse() = default;
};
class UpdateSummariesRequestBody : public Darabonba::Model {
public:
  shared_ptr<string> element{};
  shared_ptr<string> ellipsis{};
  shared_ptr<string> field{};
  shared_ptr<long> len{};
  shared_ptr<long> snippet{};

  UpdateSummariesRequestBody() {}

  explicit UpdateSummariesRequestBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (element) {
      res["element"] = boost::any(*element);
    }
    if (ellipsis) {
      res["ellipsis"] = boost::any(*ellipsis);
    }
    if (field) {
      res["field"] = boost::any(*field);
    }
    if (len) {
      res["len"] = boost::any(*len);
    }
    if (snippet) {
      res["snippet"] = boost::any(*snippet);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("element") != m.end() && !m["element"].empty()) {
      element = make_shared<string>(boost::any_cast<string>(m["element"]));
    }
    if (m.find("ellipsis") != m.end() && !m["ellipsis"].empty()) {
      ellipsis = make_shared<string>(boost::any_cast<string>(m["ellipsis"]));
    }
    if (m.find("field") != m.end() && !m["field"].empty()) {
      field = make_shared<string>(boost::any_cast<string>(m["field"]));
    }
    if (m.find("len") != m.end() && !m["len"].empty()) {
      len = make_shared<long>(boost::any_cast<long>(m["len"]));
    }
    if (m.find("snippet") != m.end() && !m["snippet"].empty()) {
      snippet = make_shared<long>(boost::any_cast<long>(m["snippet"]));
    }
  }


  virtual ~UpdateSummariesRequestBody() = default;
};
class UpdateSummariesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateSummariesRequestBody>> body{};
  shared_ptr<bool> dryRun{};

  UpdateSummariesRequest() {}

  explicit UpdateSummariesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      vector<boost::any> temp1;
      for(auto item1:*body){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["body"] = boost::any(temp1);
    }
    if (dryRun) {
      res["dryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<UpdateSummariesRequestBody> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateSummariesRequestBody model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<UpdateSummariesRequestBody>>(expect1);
      }
    }
    if (m.find("dryRun") != m.end() && !m["dryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["dryRun"]));
    }
  }


  virtual ~UpdateSummariesRequest() = default;
};
class UpdateSummariesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  UpdateSummariesResponseBody() {}

  explicit UpdateSummariesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["result"]));
    }
  }


  virtual ~UpdateSummariesResponseBody() = default;
};
class UpdateSummariesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateSummariesResponseBody> body{};

  UpdateSummariesResponse() {}

  explicit UpdateSummariesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateSummariesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSummariesResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSummariesResponse() = default;
};
class ValidateDataSourcesRequest : public Darabonba::Model {
public:
  shared_ptr<DataSource> body{};

  ValidateDataSourcesRequest() {}

  explicit ValidateDataSourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DataSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DataSource>(model1);
      }
    }
  }


  virtual ~ValidateDataSourcesRequest() = default;
};
class ValidateDataSourcesResponseBodyResultDataSource : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> parameters{};
  shared_ptr<string> tableName{};
  shared_ptr<string> type{};

  ValidateDataSourcesResponseBodyResultDataSource() {}

  explicit ValidateDataSourcesResponseBodyResultDataSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameters) {
      res["parameters"] = boost::any(*parameters);
    }
    if (tableName) {
      res["tableName"] = boost::any(*tableName);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("parameters") != m.end() && !m["parameters"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["parameters"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameters = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("tableName") != m.end() && !m["tableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["tableName"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ValidateDataSourcesResponseBodyResultDataSource() = default;
};
class ValidateDataSourcesResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ValidateDataSourcesResponseBodyResultDataSource> dataSource{};
  shared_ptr<string> message{};

  ValidateDataSourcesResponseBodyResult() {}

  explicit ValidateDataSourcesResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (dataSource) {
      res["dataSource"] = dataSource ? boost::any(dataSource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("dataSource") != m.end() && !m["dataSource"].empty()) {
      if (typeid(map<string, boost::any>) == m["dataSource"].type()) {
        ValidateDataSourcesResponseBodyResultDataSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["dataSource"]));
        dataSource = make_shared<ValidateDataSourcesResponseBodyResultDataSource>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
  }


  virtual ~ValidateDataSourcesResponseBodyResult() = default;
};
class ValidateDataSourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ValidateDataSourcesResponseBodyResult>> result{};

  ValidateDataSourcesResponseBody() {}

  explicit ValidateDataSourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ValidateDataSourcesResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ValidateDataSourcesResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ValidateDataSourcesResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ValidateDataSourcesResponseBody() = default;
};
class ValidateDataSourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ValidateDataSourcesResponseBody> body{};

  ValidateDataSourcesResponse() {}

  explicit ValidateDataSourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ValidateDataSourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ValidateDataSourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ValidateDataSourcesResponse() = default;
};
class Client : Alibabacloud_OpenApi::Client {
public:
  explicit Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config);
  string getEndpoint(shared_ptr<string> productId,
                     shared_ptr<string> regionId,
                     shared_ptr<string> endpointRule,
                     shared_ptr<string> network,
                     shared_ptr<string> suffix,
                     shared_ptr<map<string, string>> endpointMap,
                     shared_ptr<string> endpoint);
  BindESUserAnalyzerResponse bindESUserAnalyzerWithOptions(shared_ptr<string> appGroupIdentity,
                                                           shared_ptr<string> esInstanceId,
                                                           shared_ptr<BindESUserAnalyzerRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindESUserAnalyzerResponse bindESUserAnalyzer(shared_ptr<string> appGroupIdentity, shared_ptr<string> esInstanceId, shared_ptr<BindESUserAnalyzerRequest> request);
  BindEsInstanceResponse bindEsInstanceWithOptions(shared_ptr<string> appGroupIdentity,
                                                   shared_ptr<BindEsInstanceRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindEsInstanceResponse bindEsInstance(shared_ptr<string> appGroupIdentity, shared_ptr<BindEsInstanceRequest> request);
  CompileSortScriptResponse compileSortScriptWithOptions(shared_ptr<string> appGroupIdentity,
                                                         shared_ptr<string> scriptName,
                                                         shared_ptr<string> appVersionId,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CompileSortScriptResponse compileSortScript(shared_ptr<string> appGroupIdentity, shared_ptr<string> scriptName, shared_ptr<string> appVersionId);
  CreateABTestExperimentResponse createABTestExperimentWithOptions(shared_ptr<string> appGroupIdentity,
                                                                   shared_ptr<string> sceneId,
                                                                   shared_ptr<string> groupId,
                                                                   shared_ptr<CreateABTestExperimentRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateABTestExperimentResponse createABTestExperiment(shared_ptr<string> appGroupIdentity,
                                                        shared_ptr<string> sceneId,
                                                        shared_ptr<string> groupId,
                                                        shared_ptr<CreateABTestExperimentRequest> request);
  CreateABTestGroupResponse createABTestGroupWithOptions(shared_ptr<string> appGroupIdentity,
                                                         shared_ptr<string> sceneId,
                                                         shared_ptr<CreateABTestGroupRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateABTestGroupResponse createABTestGroup(shared_ptr<string> appGroupIdentity, shared_ptr<string> sceneId, shared_ptr<CreateABTestGroupRequest> request);
  CreateABTestSceneResponse createABTestSceneWithOptions(shared_ptr<string> appGroupIdentity,
                                                         shared_ptr<CreateABTestSceneRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateABTestSceneResponse createABTestScene(shared_ptr<string> appGroupIdentity, shared_ptr<CreateABTestSceneRequest> request);
  CreateAppResponse createAppWithOptions(shared_ptr<string> appGroupIdentity,
                                         shared_ptr<CreateAppRequest> request,
                                         shared_ptr<map<string, string>> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAppResponse createApp(shared_ptr<string> appGroupIdentity, shared_ptr<CreateAppRequest> request);
  CreateAppGroupResponse createAppGroupWithOptions(shared_ptr<CreateAppGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAppGroupResponse createAppGroup(shared_ptr<CreateAppGroupRequest> request);
  CreateFirstRankResponse createFirstRankWithOptions(shared_ptr<string> appGroupIdentity,
                                                     shared_ptr<string> appId,
                                                     shared_ptr<CreateFirstRankRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFirstRankResponse createFirstRank(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<CreateFirstRankRequest> request);
  CreateFunctionInstanceResponse createFunctionInstanceWithOptions(shared_ptr<string> appGroupIdentity,
                                                                   shared_ptr<string> functionName,
                                                                   shared_ptr<CreateFunctionInstanceRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFunctionInstanceResponse createFunctionInstance(shared_ptr<string> appGroupIdentity, shared_ptr<string> functionName, shared_ptr<CreateFunctionInstanceRequest> request);
  CreateFunctionTaskResponse createFunctionTaskWithOptions(shared_ptr<string> appGroupIdentity,
                                                           shared_ptr<string> functionName,
                                                           shared_ptr<string> instanceName,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFunctionTaskResponse createFunctionTask(shared_ptr<string> appGroupIdentity, shared_ptr<string> functionName, shared_ptr<string> instanceName);
  CreateInterventionDictionaryResponse createInterventionDictionaryWithOptions(shared_ptr<CreateInterventionDictionaryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateInterventionDictionaryResponse createInterventionDictionary(shared_ptr<CreateInterventionDictionaryRequest> request);
  CreateQueryProcessorResponse createQueryProcessorWithOptions(shared_ptr<string> appGroupIdentity,
                                                               shared_ptr<string> appId,
                                                               shared_ptr<CreateQueryProcessorRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateQueryProcessorResponse createQueryProcessor(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<CreateQueryProcessorRequest> request);
  CreateScheduledTaskResponse createScheduledTaskWithOptions(shared_ptr<string> appGroupIdentity,
                                                             shared_ptr<CreateScheduledTaskRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateScheduledTaskResponse createScheduledTask(shared_ptr<string> appGroupIdentity, shared_ptr<CreateScheduledTaskRequest> request);
  CreateSearchStrategyResponse createSearchStrategyWithOptions(shared_ptr<string> appGroupIdentity,
                                                               shared_ptr<string> appId,
                                                               shared_ptr<CreateSearchStrategyRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSearchStrategyResponse createSearchStrategy(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<CreateSearchStrategyRequest> request);
  CreateSecondRankResponse createSecondRankWithOptions(shared_ptr<string> appGroupIdentity,
                                                       shared_ptr<string> appId,
                                                       shared_ptr<CreateSecondRankRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSecondRankResponse createSecondRank(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<CreateSecondRankRequest> request);
  CreateSortScriptResponse createSortScriptWithOptions(shared_ptr<string> appGroupIdentity,
                                                       shared_ptr<string> appVersionId,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSortScriptResponse createSortScript(shared_ptr<string> appGroupIdentity, shared_ptr<string> appVersionId);
  CreateUserAnalyzerResponse createUserAnalyzerWithOptions(shared_ptr<CreateUserAnalyzerRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateUserAnalyzerResponse createUserAnalyzer(shared_ptr<CreateUserAnalyzerRequest> request);
  DeleteABTestExperimentResponse deleteABTestExperimentWithOptions(shared_ptr<string> appGroupIdentity,
                                                                   shared_ptr<string> sceneId,
                                                                   shared_ptr<string> groupId,
                                                                   shared_ptr<string> experimentId,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteABTestExperimentResponse deleteABTestExperiment(shared_ptr<string> appGroupIdentity,
                                                        shared_ptr<string> sceneId,
                                                        shared_ptr<string> groupId,
                                                        shared_ptr<string> experimentId);
  DeleteABTestGroupResponse deleteABTestGroupWithOptions(shared_ptr<string> appGroupIdentity,
                                                         shared_ptr<string> sceneId,
                                                         shared_ptr<string> groupId,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteABTestGroupResponse deleteABTestGroup(shared_ptr<string> appGroupIdentity, shared_ptr<string> sceneId, shared_ptr<string> groupId);
  DeleteABTestSceneResponse deleteABTestSceneWithOptions(shared_ptr<string> appGroupIdentity,
                                                         shared_ptr<string> sceneId,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteABTestSceneResponse deleteABTestScene(shared_ptr<string> appGroupIdentity, shared_ptr<string> sceneId);
  DeleteFunctionInstanceResponse deleteFunctionInstanceWithOptions(shared_ptr<string> appGroupIdentity,
                                                                   shared_ptr<string> functionName,
                                                                   shared_ptr<string> instanceName,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFunctionInstanceResponse deleteFunctionInstance(shared_ptr<string> appGroupIdentity, shared_ptr<string> functionName, shared_ptr<string> instanceName);
  DeleteFunctionTaskResponse deleteFunctionTaskWithOptions(shared_ptr<string> appGroupIdentity,
                                                           shared_ptr<string> functionName,
                                                           shared_ptr<string> instanceName,
                                                           shared_ptr<string> generation,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFunctionTaskResponse deleteFunctionTask(shared_ptr<string> appGroupIdentity,
                                                shared_ptr<string> functionName,
                                                shared_ptr<string> instanceName,
                                                shared_ptr<string> generation);
  DeleteSortScriptResponse deleteSortScriptWithOptions(shared_ptr<string> appGroupIdentity,
                                                       shared_ptr<string> scriptName,
                                                       shared_ptr<string> appVersionId,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSortScriptResponse deleteSortScript(shared_ptr<string> appGroupIdentity, shared_ptr<string> scriptName, shared_ptr<string> appVersionId);
  DeleteSortScriptFileResponse deleteSortScriptFileWithOptions(shared_ptr<string> appGroupIdentity,
                                                               shared_ptr<string> appVersionId,
                                                               shared_ptr<string> scriptName,
                                                               shared_ptr<string> fileName,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSortScriptFileResponse deleteSortScriptFile(shared_ptr<string> appGroupIdentity,
                                                    shared_ptr<string> appVersionId,
                                                    shared_ptr<string> scriptName,
                                                    shared_ptr<string> fileName);
  DescribeABTestExperimentResponse describeABTestExperimentWithOptions(shared_ptr<string> appGroupIdentity,
                                                                       shared_ptr<string> sceneId,
                                                                       shared_ptr<string> groupId,
                                                                       shared_ptr<string> experimentId,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeABTestExperimentResponse describeABTestExperiment(shared_ptr<string> appGroupIdentity,
                                                            shared_ptr<string> sceneId,
                                                            shared_ptr<string> groupId,
                                                            shared_ptr<string> experimentId);
  DescribeABTestGroupResponse describeABTestGroupWithOptions(shared_ptr<string> appGroupIdentity,
                                                             shared_ptr<string> sceneId,
                                                             shared_ptr<string> groupId,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeABTestGroupResponse describeABTestGroup(shared_ptr<string> appGroupIdentity, shared_ptr<string> sceneId, shared_ptr<string> groupId);
  DescribeABTestSceneResponse describeABTestSceneWithOptions(shared_ptr<string> appGroupIdentity,
                                                             shared_ptr<string> sceneId,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeABTestSceneResponse describeABTestScene(shared_ptr<string> appGroupIdentity, shared_ptr<string> sceneId);
  DescribeAppResponse describeAppWithOptions(shared_ptr<string> appGroupIdentity,
                                             shared_ptr<string> appId,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAppResponse describeApp(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId);
  DescribeAppGroupResponse describeAppGroupWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAppGroupResponse describeAppGroup(shared_ptr<string> appGroupIdentity);
  DescribeAppStatisticsResponse describeAppStatisticsWithOptions(shared_ptr<string> appGroupIdentity,
                                                                 shared_ptr<string> appId,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAppStatisticsResponse describeAppStatistics(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId);
  DescribeAppsResponse describeAppsWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAppsResponse describeApps(shared_ptr<string> appGroupIdentity);
  DescribeDataCollctionResponse describeDataCollctionWithOptions(shared_ptr<string> appGroupIdentity,
                                                                 shared_ptr<string> dataCollectionIdentity,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDataCollctionResponse describeDataCollction(shared_ptr<string> appGroupIdentity, shared_ptr<string> dataCollectionIdentity);
  DescribeFirstRankResponse describeFirstRankWithOptions(shared_ptr<string> appGroupIdentity,
                                                         shared_ptr<string> appId,
                                                         shared_ptr<string> name,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFirstRankResponse describeFirstRank(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<string> name);
  DescribeInterventionDictionaryResponse describeInterventionDictionaryWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInterventionDictionaryResponse describeInterventionDictionary(shared_ptr<string> name);
  DescribeQueryProcessorResponse describeQueryProcessorWithOptions(shared_ptr<string> appGroupIdentity,
                                                                   shared_ptr<string> appId,
                                                                   shared_ptr<string> name,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeQueryProcessorResponse describeQueryProcessor(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<string> name);
  DescribeRegionResponse describeRegionWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionResponse describeRegion();
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions();
  DescribeScheduledTaskResponse describeScheduledTaskWithOptions(shared_ptr<string> appGroupIdentity,
                                                                 shared_ptr<string> taskId,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScheduledTaskResponse describeScheduledTask(shared_ptr<string> appGroupIdentity, shared_ptr<string> taskId);
  DescribeSecondRankResponse describeSecondRankWithOptions(shared_ptr<string> appGroupIdentity,
                                                           shared_ptr<string> appId,
                                                           shared_ptr<string> name,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSecondRankResponse describeSecondRank(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<string> name);
  DescribeSlowQueryStatusResponse describeSlowQueryStatusWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSlowQueryStatusResponse describeSlowQueryStatus(shared_ptr<string> appGroupIdentity);
  DescribeUserAnalyzerResponse describeUserAnalyzerWithOptions(shared_ptr<string> name,
                                                               shared_ptr<DescribeUserAnalyzerRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUserAnalyzerResponse describeUserAnalyzer(shared_ptr<string> name, shared_ptr<DescribeUserAnalyzerRequest> request);
  DisableSlowQueryResponse disableSlowQueryWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableSlowQueryResponse disableSlowQuery(shared_ptr<string> appGroupIdentity);
  EnableSlowQueryResponse enableSlowQueryWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableSlowQueryResponse enableSlowQuery(shared_ptr<string> appGroupIdentity);
  GenerateMergedTableResponse generateMergedTableWithOptions(shared_ptr<GenerateMergedTableRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateMergedTableResponse generateMergedTable(shared_ptr<GenerateMergedTableRequest> request);
  GetDomainResponse getDomainWithOptions(shared_ptr<string> domainName,
                                         shared_ptr<GetDomainRequest> request,
                                         shared_ptr<map<string, string>> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDomainResponse getDomain(shared_ptr<string> domainName, shared_ptr<GetDomainRequest> request);
  GetFunctionCurrentVersionResponse getFunctionCurrentVersionWithOptions(shared_ptr<string> functionName,
                                                                         shared_ptr<GetFunctionCurrentVersionRequest> request,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFunctionCurrentVersionResponse getFunctionCurrentVersion(shared_ptr<string> functionName, shared_ptr<GetFunctionCurrentVersionRequest> request);
  GetFunctionDefaultInstanceResponse getFunctionDefaultInstanceWithOptions(shared_ptr<string> appGroupIdentity,
                                                                           shared_ptr<string> functionName,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFunctionDefaultInstanceResponse getFunctionDefaultInstance(shared_ptr<string> appGroupIdentity, shared_ptr<string> functionName);
  GetFunctionInstanceResponse getFunctionInstanceWithOptions(shared_ptr<string> appGroupIdentity,
                                                             shared_ptr<string> functionName,
                                                             shared_ptr<string> instanceName,
                                                             shared_ptr<GetFunctionInstanceRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFunctionInstanceResponse getFunctionInstance(shared_ptr<string> appGroupIdentity,
                                                  shared_ptr<string> functionName,
                                                  shared_ptr<string> instanceName,
                                                  shared_ptr<GetFunctionInstanceRequest> request);
  GetFunctionTaskResponse getFunctionTaskWithOptions(shared_ptr<string> appGroupIdentity,
                                                     shared_ptr<string> functionName,
                                                     shared_ptr<string> instanceName,
                                                     shared_ptr<string> generation,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFunctionTaskResponse getFunctionTask(shared_ptr<string> appGroupIdentity,
                                          shared_ptr<string> functionName,
                                          shared_ptr<string> instanceName,
                                          shared_ptr<string> generation);
  GetFunctionVersionResponse getFunctionVersionWithOptions(shared_ptr<string> functionName,
                                                           shared_ptr<string> versionId,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFunctionVersionResponse getFunctionVersion(shared_ptr<string> functionName, shared_ptr<string> versionId);
  GetModelReportResponse getModelReportWithOptions(shared_ptr<string> appGroupIdentity,
                                                   shared_ptr<string> modelName,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetModelReportResponse getModelReport(shared_ptr<string> appGroupIdentity, shared_ptr<string> modelName);
  GetScriptFileNamesResponse getScriptFileNamesWithOptions(shared_ptr<string> appGroupIdentity,
                                                           shared_ptr<string> appVersionId,
                                                           shared_ptr<string> scriptName,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetScriptFileNamesResponse getScriptFileNames(shared_ptr<string> appGroupIdentity, shared_ptr<string> appVersionId, shared_ptr<string> scriptName);
  GetSearchStrategyResponse getSearchStrategyWithOptions(shared_ptr<string> appGroupIdentity,
                                                         shared_ptr<string> appId,
                                                         shared_ptr<string> strategyName,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSearchStrategyResponse getSearchStrategy(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<string> strategyName);
  GetSortScriptResponse getSortScriptWithOptions(shared_ptr<string> appGroupIdentity,
                                                 shared_ptr<string> scriptName,
                                                 shared_ptr<string> appVersionId,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSortScriptResponse getSortScript(shared_ptr<string> appGroupIdentity, shared_ptr<string> scriptName, shared_ptr<string> appVersionId);
  GetSortScriptFileResponse getSortScriptFileWithOptions(shared_ptr<string> appGroupIdentity,
                                                         shared_ptr<string> scriptName,
                                                         shared_ptr<string> appVersionId,
                                                         shared_ptr<string> fileName,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSortScriptFileResponse getSortScriptFile(shared_ptr<string> appGroupIdentity,
                                              shared_ptr<string> scriptName,
                                              shared_ptr<string> appVersionId,
                                              shared_ptr<string> fileName);
  ListABTestExperimentsResponse listABTestExperimentsWithOptions(shared_ptr<string> appGroupIdentity,
                                                                 shared_ptr<string> sceneId,
                                                                 shared_ptr<string> groupId,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListABTestExperimentsResponse listABTestExperiments(shared_ptr<string> appGroupIdentity, shared_ptr<string> sceneId, shared_ptr<string> groupId);
  ListABTestFixedFlowDividersResponse listABTestFixedFlowDividersWithOptions(shared_ptr<string> appGroupIdentity,
                                                                             shared_ptr<string> sceneId,
                                                                             shared_ptr<string> groupId,
                                                                             shared_ptr<string> experimentId,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListABTestFixedFlowDividersResponse listABTestFixedFlowDividers(shared_ptr<string> appGroupIdentity,
                                                                  shared_ptr<string> sceneId,
                                                                  shared_ptr<string> groupId,
                                                                  shared_ptr<string> experimentId);
  ListABTestGroupsResponse listABTestGroupsWithOptions(shared_ptr<string> appGroupIdentity,
                                                       shared_ptr<string> sceneId,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListABTestGroupsResponse listABTestGroups(shared_ptr<string> appGroupIdentity, shared_ptr<string> sceneId);
  ListABTestScenesResponse listABTestScenesWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListABTestScenesResponse listABTestScenes(shared_ptr<string> appGroupIdentity);
  ListAppGroupsResponse listAppGroupsWithOptions(shared_ptr<ListAppGroupsRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAppGroupsResponse listAppGroups(shared_ptr<ListAppGroupsRequest> request);
  ListAppsResponse listAppsWithOptions(shared_ptr<ListAppsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAppsResponse listApps(shared_ptr<ListAppsRequest> request);
  ListDataCollectionsResponse listDataCollectionsWithOptions(shared_ptr<string> appGroupIdentity,
                                                             shared_ptr<ListDataCollectionsRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDataCollectionsResponse listDataCollections(shared_ptr<string> appGroupIdentity, shared_ptr<ListDataCollectionsRequest> request);
  ListDataSourceTableFieldsResponse listDataSourceTableFieldsWithOptions(shared_ptr<string> dataSourceType,
                                                                         shared_ptr<ListDataSourceTableFieldsRequest> request,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDataSourceTableFieldsResponse listDataSourceTableFields(shared_ptr<string> dataSourceType, shared_ptr<ListDataSourceTableFieldsRequest> request);
  ListDataSourceTablesResponse listDataSourceTablesWithOptions(shared_ptr<string> dataSourceType,
                                                               shared_ptr<ListDataSourceTablesRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDataSourceTablesResponse listDataSourceTables(shared_ptr<string> dataSourceType, shared_ptr<ListDataSourceTablesRequest> request);
  ListFirstRanksResponse listFirstRanksWithOptions(shared_ptr<string> appGroupIdentity,
                                                   shared_ptr<string> appId,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFirstRanksResponse listFirstRanks(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId);
  ListFunctionInstancesResponse listFunctionInstancesWithOptions(shared_ptr<string> appGroupIdentity,
                                                                 shared_ptr<string> functionName,
                                                                 shared_ptr<ListFunctionInstancesRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFunctionInstancesResponse listFunctionInstances(shared_ptr<string> appGroupIdentity, shared_ptr<string> functionName, shared_ptr<ListFunctionInstancesRequest> request);
  ListFunctionTasksResponse listFunctionTasksWithOptions(shared_ptr<string> appGroupIdentity,
                                                         shared_ptr<string> functionName,
                                                         shared_ptr<string> instanceName,
                                                         shared_ptr<ListFunctionTasksRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFunctionTasksResponse listFunctionTasks(shared_ptr<string> appGroupIdentity,
                                              shared_ptr<string> functionName,
                                              shared_ptr<string> instanceName,
                                              shared_ptr<ListFunctionTasksRequest> request);
  ListInterventionDictionariesResponse listInterventionDictionariesWithOptions(shared_ptr<ListInterventionDictionariesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInterventionDictionariesResponse listInterventionDictionaries(shared_ptr<ListInterventionDictionariesRequest> request);
  ListInterventionDictionaryEntriesResponse listInterventionDictionaryEntriesWithOptions(shared_ptr<string> name,
                                                                                         shared_ptr<ListInterventionDictionaryEntriesRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInterventionDictionaryEntriesResponse listInterventionDictionaryEntries(shared_ptr<string> name, shared_ptr<ListInterventionDictionaryEntriesRequest> request);
  ListInterventionDictionaryNerResultsResponse listInterventionDictionaryNerResultsWithOptions(shared_ptr<string> name,
                                                                                               shared_ptr<ListInterventionDictionaryNerResultsRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInterventionDictionaryNerResultsResponse listInterventionDictionaryNerResults(shared_ptr<string> name, shared_ptr<ListInterventionDictionaryNerResultsRequest> request);
  ListInterventionDictionaryRelatedEntitiesResponse listInterventionDictionaryRelatedEntitiesWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInterventionDictionaryRelatedEntitiesResponse listInterventionDictionaryRelatedEntities(shared_ptr<string> name);
  ListModelsResponse listModelsWithOptions(shared_ptr<string> appGroupIdentity,
                                           shared_ptr<ListModelsRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListModelsResponse listModels(shared_ptr<string> appGroupIdentity, shared_ptr<ListModelsRequest> request);
  ListProceedingsResponse listProceedingsWithOptions(shared_ptr<string> appGroupIdentity,
                                                     shared_ptr<ListProceedingsRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProceedingsResponse listProceedings(shared_ptr<string> appGroupIdentity, shared_ptr<ListProceedingsRequest> request);
  ListQueryProcessorAnalyzerResultsResponse listQueryProcessorAnalyzerResultsWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                         shared_ptr<string> appId,
                                                                                         shared_ptr<string> name,
                                                                                         shared_ptr<ListQueryProcessorAnalyzerResultsRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListQueryProcessorAnalyzerResultsResponse listQueryProcessorAnalyzerResults(shared_ptr<string> appGroupIdentity,
                                                                              shared_ptr<string> appId,
                                                                              shared_ptr<string> name,
                                                                              shared_ptr<ListQueryProcessorAnalyzerResultsRequest> request);
  ListQueryProcessorNersResponse listQueryProcessorNersWithOptions(shared_ptr<ListQueryProcessorNersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListQueryProcessorNersResponse listQueryProcessorNers(shared_ptr<ListQueryProcessorNersRequest> request);
  ListQueryProcessorsResponse listQueryProcessorsWithOptions(shared_ptr<string> appGroupIdentity,
                                                             shared_ptr<string> appId,
                                                             shared_ptr<ListQueryProcessorsRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListQueryProcessorsResponse listQueryProcessors(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<ListQueryProcessorsRequest> request);
  ListQuotaReviewTasksResponse listQuotaReviewTasksWithOptions(shared_ptr<string> appGroupIdentity,
                                                               shared_ptr<ListQuotaReviewTasksRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListQuotaReviewTasksResponse listQuotaReviewTasks(shared_ptr<string> appGroupIdentity, shared_ptr<ListQuotaReviewTasksRequest> request);
  ListScheduledTasksResponse listScheduledTasksWithOptions(shared_ptr<string> appGroupIdentity,
                                                           shared_ptr<ListScheduledTasksRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListScheduledTasksResponse listScheduledTasks(shared_ptr<string> appGroupIdentity, shared_ptr<ListScheduledTasksRequest> request);
  ListSearchStrategiesResponse listSearchStrategiesWithOptions(shared_ptr<string> appGroupIdentity,
                                                               shared_ptr<string> appId,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSearchStrategiesResponse listSearchStrategies(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId);
  ListSecondRanksResponse listSecondRanksWithOptions(shared_ptr<string> appGroupIdentity,
                                                     shared_ptr<string> appId,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSecondRanksResponse listSecondRanks(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId);
  ListSlowQueryCategoriesResponse listSlowQueryCategoriesWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSlowQueryCategoriesResponse listSlowQueryCategories(shared_ptr<string> appGroupIdentity);
  ListSlowQueryQueriesResponse listSlowQueryQueriesWithOptions(shared_ptr<string> appGroupIdentity,
                                                               shared_ptr<string> categoryIndex,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSlowQueryQueriesResponse listSlowQueryQueries(shared_ptr<string> appGroupIdentity, shared_ptr<string> categoryIndex);
  ListSortExpressionsResponse listSortExpressionsWithOptions(shared_ptr<string> appGroupIdentity,
                                                             shared_ptr<string> appId,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSortExpressionsResponse listSortExpressions(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId);
  ListSortScriptsResponse listSortScriptsWithOptions(shared_ptr<string> appGroupIdentity,
                                                     shared_ptr<string> appVersionId,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSortScriptsResponse listSortScripts(shared_ptr<string> appGroupIdentity, shared_ptr<string> appVersionId);
  ListStatisticLogsResponse listStatisticLogsWithOptions(shared_ptr<string> appGroupIdentity,
                                                         shared_ptr<string> moduleName,
                                                         shared_ptr<ListStatisticLogsRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListStatisticLogsResponse listStatisticLogs(shared_ptr<string> appGroupIdentity, shared_ptr<string> moduleName, shared_ptr<ListStatisticLogsRequest> request);
  ListStatisticReportResponse listStatisticReportWithOptions(shared_ptr<string> appGroupIdentity,
                                                             shared_ptr<string> moduleName,
                                                             shared_ptr<ListStatisticReportRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListStatisticReportResponse listStatisticReport(shared_ptr<string> appGroupIdentity, shared_ptr<string> moduleName, shared_ptr<ListStatisticReportRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ListUserAnalyzerEntriesResponse listUserAnalyzerEntriesWithOptions(shared_ptr<string> name,
                                                                     shared_ptr<ListUserAnalyzerEntriesRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserAnalyzerEntriesResponse listUserAnalyzerEntries(shared_ptr<string> name, shared_ptr<ListUserAnalyzerEntriesRequest> request);
  ListUserAnalyzersResponse listUserAnalyzersWithOptions(shared_ptr<ListUserAnalyzersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserAnalyzersResponse listUserAnalyzers(shared_ptr<ListUserAnalyzersRequest> request);
  ModifyAppGroupResponse modifyAppGroupWithOptions(shared_ptr<string> appGroupIdentity,
                                                   shared_ptr<ModifyAppGroupRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAppGroupResponse modifyAppGroup(shared_ptr<string> appGroupIdentity, shared_ptr<ModifyAppGroupRequest> request);
  ModifyAppGroupQuotaResponse modifyAppGroupQuotaWithOptions(shared_ptr<string> appGroupIdentity,
                                                             shared_ptr<ModifyAppGroupQuotaRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAppGroupQuotaResponse modifyAppGroupQuota(shared_ptr<string> appGroupIdentity, shared_ptr<ModifyAppGroupQuotaRequest> request);
  ModifyFirstRankResponse modifyFirstRankWithOptions(shared_ptr<string> appGroupIdentity,
                                                     shared_ptr<string> appId,
                                                     shared_ptr<string> name,
                                                     shared_ptr<ModifyFirstRankRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyFirstRankResponse modifyFirstRank(shared_ptr<string> appGroupIdentity,
                                          shared_ptr<string> appId,
                                          shared_ptr<string> name,
                                          shared_ptr<ModifyFirstRankRequest> request);
  ModifyQueryProcessorResponse modifyQueryProcessorWithOptions(shared_ptr<string> appGroupIdentity,
                                                               shared_ptr<string> appId,
                                                               shared_ptr<string> name,
                                                               shared_ptr<ModifyQueryProcessorRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyQueryProcessorResponse modifyQueryProcessor(shared_ptr<string> appGroupIdentity,
                                                    shared_ptr<string> appId,
                                                    shared_ptr<string> name,
                                                    shared_ptr<ModifyQueryProcessorRequest> request);
  ModifyScheduledTaskResponse modifyScheduledTaskWithOptions(shared_ptr<string> appGroupIdentity,
                                                             shared_ptr<string> taskId,
                                                             shared_ptr<ModifyScheduledTaskRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyScheduledTaskResponse modifyScheduledTask(shared_ptr<string> appGroupIdentity, shared_ptr<string> taskId, shared_ptr<ModifyScheduledTaskRequest> request);
  ModifySecondRankResponse modifySecondRankWithOptions(shared_ptr<string> appGroupIdentity,
                                                       shared_ptr<string> appId,
                                                       shared_ptr<string> name,
                                                       shared_ptr<ModifySecondRankRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifySecondRankResponse modifySecondRank(shared_ptr<string> appGroupIdentity,
                                            shared_ptr<string> appId,
                                            shared_ptr<string> name,
                                            shared_ptr<ModifySecondRankRequest> request);
  PreviewModelResponse previewModelWithOptions(shared_ptr<string> appGroupIdentity,
                                               shared_ptr<string> modelName,
                                               shared_ptr<PreviewModelRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PreviewModelResponse previewModel(shared_ptr<string> appGroupIdentity, shared_ptr<string> modelName, shared_ptr<PreviewModelRequest> request);
  PushInterventionDictionaryEntriesResponse pushInterventionDictionaryEntriesWithOptions(shared_ptr<string> name,
                                                                                         shared_ptr<PushInterventionDictionaryEntriesRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PushInterventionDictionaryEntriesResponse pushInterventionDictionaryEntries(shared_ptr<string> name, shared_ptr<PushInterventionDictionaryEntriesRequest> request);
  PushUserAnalyzerEntriesResponse pushUserAnalyzerEntriesWithOptions(shared_ptr<string> name,
                                                                     shared_ptr<PushUserAnalyzerEntriesRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PushUserAnalyzerEntriesResponse pushUserAnalyzerEntries(shared_ptr<string> name, shared_ptr<PushUserAnalyzerEntriesRequest> request);
  RankPreviewQueryResponse rankPreviewQueryWithOptions(shared_ptr<string> appGroupIdentity,
                                                       shared_ptr<string> modelName,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RankPreviewQueryResponse rankPreviewQuery(shared_ptr<string> appGroupIdentity, shared_ptr<string> modelName);
  ReleaseSortScriptResponse releaseSortScriptWithOptions(shared_ptr<string> appGroupIdentity,
                                                         shared_ptr<string> scriptName,
                                                         shared_ptr<string> appVersionId,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseSortScriptResponse releaseSortScript(shared_ptr<string> appGroupIdentity, shared_ptr<string> scriptName, shared_ptr<string> appVersionId);
  RemoveAppResponse removeAppWithOptions(shared_ptr<string> appGroupIdentity,
                                         shared_ptr<string> appId,
                                         shared_ptr<map<string, string>> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveAppResponse removeApp(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId);
  RemoveAppGroupResponse removeAppGroupWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveAppGroupResponse removeAppGroup(shared_ptr<string> appGroupIdentity);
  RemoveDataCollectionResponse removeDataCollectionWithOptions(shared_ptr<string> appGroupIdentity,
                                                               shared_ptr<string> dataCollectionIdentity,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveDataCollectionResponse removeDataCollection(shared_ptr<string> appGroupIdentity, shared_ptr<string> dataCollectionIdentity);
  RemoveFirstRankResponse removeFirstRankWithOptions(shared_ptr<string> appGroupIdentity,
                                                     shared_ptr<string> appId,
                                                     shared_ptr<string> name,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveFirstRankResponse removeFirstRank(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<string> name);
  RemoveInterventionDictionaryResponse removeInterventionDictionaryWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveInterventionDictionaryResponse removeInterventionDictionary(shared_ptr<string> name);
  RemoveQueryProcessorResponse removeQueryProcessorWithOptions(shared_ptr<string> appGroupIdentity,
                                                               shared_ptr<string> appId,
                                                               shared_ptr<string> name,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveQueryProcessorResponse removeQueryProcessor(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<string> name);
  RemoveScheduledTaskResponse removeScheduledTaskWithOptions(shared_ptr<string> appGroupIdentity,
                                                             shared_ptr<string> taskId,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveScheduledTaskResponse removeScheduledTask(shared_ptr<string> appGroupIdentity, shared_ptr<string> taskId);
  RemoveSearchStrategyResponse removeSearchStrategyWithOptions(shared_ptr<string> appGroupIdentity,
                                                               shared_ptr<string> appId,
                                                               shared_ptr<string> strategyName,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveSearchStrategyResponse removeSearchStrategy(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<string> strategyName);
  RemoveSecondRankResponse removeSecondRankWithOptions(shared_ptr<string> appGroupIdentity,
                                                       shared_ptr<string> appId,
                                                       shared_ptr<string> name,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveSecondRankResponse removeSecondRank(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<string> name);
  RemoveUserAnalyzerResponse removeUserAnalyzerWithOptions(shared_ptr<string> name, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveUserAnalyzerResponse removeUserAnalyzer(shared_ptr<string> name);
  RenewAppGroupResponse renewAppGroupWithOptions(shared_ptr<string> appGroupIdentity,
                                                 shared_ptr<RenewAppGroupRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenewAppGroupResponse renewAppGroup(shared_ptr<string> appGroupIdentity, shared_ptr<RenewAppGroupRequest> request);
  ReplaceAppGroupCommodityCodeResponse replaceAppGroupCommodityCodeWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReplaceAppGroupCommodityCodeResponse replaceAppGroupCommodityCode(shared_ptr<string> appGroupIdentity);
  SaveSortScriptFileResponse saveSortScriptFileWithOptions(shared_ptr<string> appGroupIdentity,
                                                           shared_ptr<string> scriptName,
                                                           shared_ptr<string> appVersionId,
                                                           shared_ptr<string> fileName,
                                                           shared_ptr<SaveSortScriptFileRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveSortScriptFileResponse saveSortScriptFile(shared_ptr<string> appGroupIdentity,
                                                shared_ptr<string> scriptName,
                                                shared_ptr<string> appVersionId,
                                                shared_ptr<string> fileName,
                                                shared_ptr<SaveSortScriptFileRequest> request);
  StartSlowQueryAnalyzerResponse startSlowQueryAnalyzerWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartSlowQueryAnalyzerResponse startSlowQueryAnalyzer(shared_ptr<string> appGroupIdentity);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UnbindESUserAnalyzerResponse unbindESUserAnalyzerWithOptions(shared_ptr<string> appGroupIdentity,
                                                               shared_ptr<string> esInstanceId,
                                                               shared_ptr<UnbindESUserAnalyzerRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnbindESUserAnalyzerResponse unbindESUserAnalyzer(shared_ptr<string> appGroupIdentity, shared_ptr<string> esInstanceId, shared_ptr<UnbindESUserAnalyzerRequest> request);
  UnbindEsInstanceResponse unbindEsInstanceWithOptions(shared_ptr<string> appGroupIdentity, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnbindEsInstanceResponse unbindEsInstance(shared_ptr<string> appGroupIdentity);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UpdateABTestExperimentResponse updateABTestExperimentWithOptions(shared_ptr<string> appGroupIdentity,
                                                                   shared_ptr<string> sceneId,
                                                                   shared_ptr<string> groupId,
                                                                   shared_ptr<string> experimentId,
                                                                   shared_ptr<UpdateABTestExperimentRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateABTestExperimentResponse updateABTestExperiment(shared_ptr<string> appGroupIdentity,
                                                        shared_ptr<string> sceneId,
                                                        shared_ptr<string> groupId,
                                                        shared_ptr<string> experimentId,
                                                        shared_ptr<UpdateABTestExperimentRequest> request);
  UpdateABTestFixedFlowDividersResponse updateABTestFixedFlowDividersWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                 shared_ptr<string> sceneId,
                                                                                 shared_ptr<string> groupId,
                                                                                 shared_ptr<string> experimentId,
                                                                                 shared_ptr<UpdateABTestFixedFlowDividersRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateABTestFixedFlowDividersResponse updateABTestFixedFlowDividers(shared_ptr<string> appGroupIdentity,
                                                                      shared_ptr<string> sceneId,
                                                                      shared_ptr<string> groupId,
                                                                      shared_ptr<string> experimentId,
                                                                      shared_ptr<UpdateABTestFixedFlowDividersRequest> request);
  UpdateABTestGroupResponse updateABTestGroupWithOptions(shared_ptr<string> appGroupIdentity,
                                                         shared_ptr<string> sceneId,
                                                         shared_ptr<string> groupId,
                                                         shared_ptr<UpdateABTestGroupRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateABTestGroupResponse updateABTestGroup(shared_ptr<string> appGroupIdentity,
                                              shared_ptr<string> sceneId,
                                              shared_ptr<string> groupId,
                                              shared_ptr<UpdateABTestGroupRequest> request);
  UpdateABTestSceneResponse updateABTestSceneWithOptions(shared_ptr<string> appGroupIdentity,
                                                         shared_ptr<string> sceneId,
                                                         shared_ptr<UpdateABTestSceneRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateABTestSceneResponse updateABTestScene(shared_ptr<string> appGroupIdentity, shared_ptr<string> sceneId, shared_ptr<UpdateABTestSceneRequest> request);
  UpdateFetchFieldsResponse updateFetchFieldsWithOptions(shared_ptr<string> appGroupIdentity,
                                                         shared_ptr<string> appId,
                                                         shared_ptr<UpdateFetchFieldsRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFetchFieldsResponse updateFetchFields(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<UpdateFetchFieldsRequest> request);
  UpdateFunctionDefaultInstanceResponse updateFunctionDefaultInstanceWithOptions(shared_ptr<string> appGroupIdentity,
                                                                                 shared_ptr<string> functionName,
                                                                                 shared_ptr<UpdateFunctionDefaultInstanceRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFunctionDefaultInstanceResponse updateFunctionDefaultInstance(shared_ptr<string> appGroupIdentity, shared_ptr<string> functionName, shared_ptr<UpdateFunctionDefaultInstanceRequest> request);
  UpdateFunctionInstanceResponse updateFunctionInstanceWithOptions(shared_ptr<string> appGroupIdentity,
                                                                   shared_ptr<string> functionName,
                                                                   shared_ptr<string> instanceName,
                                                                   shared_ptr<UpdateFunctionInstanceRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFunctionInstanceResponse updateFunctionInstance(shared_ptr<string> appGroupIdentity,
                                                        shared_ptr<string> functionName,
                                                        shared_ptr<string> instanceName,
                                                        shared_ptr<UpdateFunctionInstanceRequest> request);
  UpdateSearchStrategyResponse updateSearchStrategyWithOptions(shared_ptr<string> appGroupIdentity,
                                                               shared_ptr<string> appId,
                                                               shared_ptr<string> strategyName,
                                                               shared_ptr<UpdateSearchStrategyRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSearchStrategyResponse updateSearchStrategy(shared_ptr<string> appGroupIdentity,
                                                    shared_ptr<string> appId,
                                                    shared_ptr<string> strategyName,
                                                    shared_ptr<UpdateSearchStrategyRequest> request);
  UpdateSortScriptResponse updateSortScriptWithOptions(shared_ptr<string> appGroupIdentity,
                                                       shared_ptr<string> appVersionId,
                                                       shared_ptr<string> scriptName,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSortScriptResponse updateSortScript(shared_ptr<string> appGroupIdentity, shared_ptr<string> appVersionId, shared_ptr<string> scriptName);
  UpdateSummariesResponse updateSummariesWithOptions(shared_ptr<string> appGroupIdentity,
                                                     shared_ptr<string> appId,
                                                     shared_ptr<UpdateSummariesRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSummariesResponse updateSummaries(shared_ptr<string> appGroupIdentity, shared_ptr<string> appId, shared_ptr<UpdateSummariesRequest> request);
  ValidateDataSourcesResponse validateDataSourcesWithOptions(shared_ptr<ValidateDataSourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ValidateDataSourcesResponse validateDataSources(shared_ptr<ValidateDataSourcesRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_OpenSearch20171225

#endif
