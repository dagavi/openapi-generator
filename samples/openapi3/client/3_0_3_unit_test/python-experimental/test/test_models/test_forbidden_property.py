# coding: utf-8

"""
    openapi 3.0.3 sample spec

    sample spec for testing openapi functionality, built from json schema tests for draft6  # noqa: E501

    The version of the OpenAPI document: 0.0.1
    Generated by: https://openapi-generator.tech
"""

import unittest

import unit_test_api
from unit_test_api.model.forbidden_property import ForbiddenProperty
from unit_test_api import configuration


class TestForbiddenProperty(unittest.TestCase):
    """ForbiddenProperty unit test stubs"""
    _configuration = configuration.Configuration()

    def test_property_present_fails(self):
        # property present
        with self.assertRaises((unit_test_api.ApiValueError, unit_test_api.ApiTypeError)):
            ForbiddenProperty.from_openapi_data_oapg(
                {
                    "foo":
                        1,
                    "bar":
                        2,
                },
                _configuration=self._configuration
            )

    def test_property_absent_passes(self):
        # property absent
        ForbiddenProperty.from_openapi_data_oapg(
            {
                "bar":
                    1,
                "baz":
                    2,
            },
            _configuration=self._configuration
        )


if __name__ == '__main__':
    unittest.main()
