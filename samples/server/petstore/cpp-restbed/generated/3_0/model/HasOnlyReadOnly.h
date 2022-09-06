/**
 * OpenAPI Petstore
 * This spec is mainly for testing Petstore server and contains fake endpoints, models. Please do not use this for any other purpose. Special characters: \" \\
 *
 * The version of the OpenAPI document: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.1.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * HasOnlyReadOnly.h
 *
 * 
 */

#ifndef HasOnlyReadOnly_H_
#define HasOnlyReadOnly_H_



#include <string>
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
class  HasOnlyReadOnly 
{
public:
    HasOnlyReadOnly() = default;
    explicit HasOnlyReadOnly(boost::property_tree::ptree const& pt);
    virtual ~HasOnlyReadOnly() = default;

    HasOnlyReadOnly(const HasOnlyReadOnly& other) = default; // copy constructor
    HasOnlyReadOnly(HasOnlyReadOnly&& other) noexcept = default; // move constructor

    HasOnlyReadOnly& operator=(const HasOnlyReadOnly& other) = default; // copy assignment
    HasOnlyReadOnly& operator=(HasOnlyReadOnly&& other) noexcept = default; // move assignment

    std::string toJsonString(bool prettyJson = false) const;
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree() const;
    void fromPropertyTree(boost::property_tree::ptree const& pt);


    /////////////////////////////////////////////
    /// HasOnlyReadOnly members

    /// <summary>
    /// 
    /// </summary>
    std::string getBar() const;
    void setBar(std::string value);

    /// <summary>
    /// 
    /// </summary>
    std::string getFoo() const;
    void setFoo(std::string value);

protected:
    std::string m_Bar = "";
    std::string m_Foo = "";
};

std::vector<HasOnlyReadOnly> createHasOnlyReadOnlyVectorFromJsonString(const std::string& json);

template<>
inline boost::property_tree::ptree toPt<HasOnlyReadOnly>(const HasOnlyReadOnly& val) {
    return val.toPropertyTree();
}

template<>
inline HasOnlyReadOnly fromPt<HasOnlyReadOnly>(const boost::property_tree::ptree& pt) {
    HasOnlyReadOnly ret;
    ret.fromPropertyTree(pt);
    return ret;
}

}
}
}
}

#endif /* HasOnlyReadOnly_H_ */
