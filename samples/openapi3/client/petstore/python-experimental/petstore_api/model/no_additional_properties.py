# coding: utf-8

"""
    OpenAPI Petstore

    This spec is mainly for testing Petstore server and contains fake endpoints, models. Please do not use this for any other purpose. Special characters: \" \\  # noqa: E501

    The version of the OpenAPI document: 1.0.0
    Generated by: https://openapi-generator.tech
"""

from datetime import date, datetime  # noqa: F401
import decimal  # noqa: F401
import functools  # noqa: F401
import io  # noqa: F401
import re  # noqa: F401
import typing  # noqa: F401
import uuid  # noqa: F401

import frozendict  # noqa: F401

from petstore_api import schemas  # noqa: F401


class NoAdditionalProperties(
    schemas.DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """


    class MetaOapg:
        required = {
            "id",
        }
        class properties:
            id = schemas.Int64Schema
            petId = schemas.Int64Schema
            __annotations__ = {
                "id": id,
                "petId": petId,
            }
        additional_properties = schemas.NotAnyTypeSchema
    
    id: MetaOapg.properties.id
    
    @typing.overload
    def __getitem__(self, name: typing.Literal["id"]) -> MetaOapg.properties.id: ...
    
    @typing.overload
    def __getitem__(self, name: typing.Literal["petId"]) -> MetaOapg.properties.petId: ...
    
    def __getitem__(self, name: typing.Union[typing.Literal["id"], typing.Literal["petId"], ]):
        # dict_instance[name] accessor
        return super().__getitem__(name)
    
    @typing.overload
    def get_item_oapg(self, name: typing.Literal["id"]) -> MetaOapg.properties.id: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing.Literal["petId"]) -> typing.Union[MetaOapg.properties.petId, schemas.Unset]: ...
    
    def get_item_oapg(self, name: typing.Union[typing.Literal["id"], typing.Literal["petId"], ]):
        return super().get_item_oapg(name)

    def __new__(
        cls,
        *args: typing.Union[dict, frozendict.frozendict, ],
        id: typing.Union[MetaOapg.properties.id, int, ],
        petId: typing.Union[MetaOapg.properties.petId, int, schemas.Unset] = schemas.unset,
        _configuration: typing.Optional[schemas.Configuration] = None,
    ) -> 'NoAdditionalProperties':
        return super().__new__(
            cls,
            *args,
            id=id,
            petId=petId,
            _configuration=_configuration,
        )
