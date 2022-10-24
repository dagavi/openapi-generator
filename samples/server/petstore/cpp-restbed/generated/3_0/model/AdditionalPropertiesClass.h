/**
 * OpenAPI Petstore
 * This spec is mainly for testing Petstore server and contains fake endpoints, models. Please do not use this for any other purpose. Special characters: \" \\
 *
 * The version of the OpenAPI document: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.2.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * AdditionalPropertiesClass.h
 *
 * 
 */

#ifndef AdditionalPropertiesClass_H_
#define AdditionalPropertiesClass_H_



#include <string>
#include <map>
#include <memory>
#include <vector>
#include <boost/property_tree/ptree.hpp>
#include "helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  AdditionalPropertiesClass 
{
public:
    AdditionalPropertiesClass() = default;
    explicit AdditionalPropertiesClass(boost::property_tree::ptree const& pt);
    virtual ~AdditionalPropertiesClass() = default;

    AdditionalPropertiesClass(const AdditionalPropertiesClass& other) = default; // copy constructor
    AdditionalPropertiesClass(AdditionalPropertiesClass&& other) noexcept = default; // move constructor

    AdditionalPropertiesClass& operator=(const AdditionalPropertiesClass& other) = default; // copy assignment
    AdditionalPropertiesClass& operator=(AdditionalPropertiesClass&& other) noexcept = default; // move assignment

    std::string toJsonString(bool prettyJson = false) const;
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree() const;
    void fromPropertyTree(boost::property_tree::ptree const& pt);


    /////////////////////////////////////////////
    /// AdditionalPropertiesClass members

    /// <summary>
    /// 
    /// </summary>
    std::map<std::string, std::string> getMapProperty() const;
    void setMapProperty(std::map<std::string, std::string> value);

    /// <summary>
    /// 
    /// </summary>
    std::map<std::string, std::map<std::string, std::string>> getMapOfMapProperty() const;
    void setMapOfMapProperty(std::map<std::string, std::map<std::string, std::string>> value);

protected:
    std::map<std::string, std::string> m_Map_property;
    std::map<std::string, std::map<std::string, std::string>> m_Map_of_map_property;
};

std::vector<AdditionalPropertiesClass> createAdditionalPropertiesClassVectorFromJsonString(const std::string& json);

template<>
inline boost::property_tree::ptree toPt<AdditionalPropertiesClass>(const AdditionalPropertiesClass& val) {
    return val.toPropertyTree();
}

template<>
inline AdditionalPropertiesClass fromPt<AdditionalPropertiesClass>(const boost::property_tree::ptree& pt) {
    AdditionalPropertiesClass ret;
    ret.fromPropertyTree(pt);
    return ret;
}

}
}
}
}

#endif /* AdditionalPropertiesClass_H_ */
