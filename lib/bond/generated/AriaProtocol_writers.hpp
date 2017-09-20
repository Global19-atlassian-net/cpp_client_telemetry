//------------------------------------------------------------------------------
// This code was generated by a tool.
//
//   Tool : bondjson2cpp 2017.09.19.1
//   File : AriaProtocol.json
//
// Changes to this file may cause incorrect behavior and will be lost when
// the code is regenerated.
// <auto-generated />
//------------------------------------------------------------------------------

#pragma once
#include "BondConstTypes.hpp"

namespace bond_lite {

template<typename TWriter>
void Serialize(TWriter& writer, ::AriaProtocol::Ingest const& value, bool isBase)
{
    writer.WriteStructBegin(nullptr, isBase);

    if (value.time != 0) {
        writer.WriteFieldBegin(BT_INT64, 1, nullptr);
        writer.WriteInt64(value.time);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_INT64, 1, nullptr);
    }

    if (!value.clientIp.empty()) {
        writer.WriteFieldBegin(BT_STRING, 2, nullptr);
        writer.WriteString(value.clientIp);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 2, nullptr);
    }

    if (value.auth != 0) {
        writer.WriteFieldBegin(BT_INT64, 3, nullptr);
        writer.WriteInt64(value.auth);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_INT64, 3, nullptr);
    }

    if (value.quality != 0) {
        writer.WriteFieldBegin(BT_INT64, 4, nullptr);
        writer.WriteInt64(value.quality);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_INT64, 4, nullptr);
    }

    if (value.uploadTime != 0) {
        writer.WriteFieldBegin(BT_INT64, 5, nullptr);
        writer.WriteInt64(value.uploadTime);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_INT64, 5, nullptr);
    }

    if (!value.userAgent.empty()) {
        writer.WriteFieldBegin(BT_STRING, 6, nullptr);
        writer.WriteString(value.userAgent);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 6, nullptr);
    }

    if (!value.client.empty()) {
        writer.WriteFieldBegin(BT_STRING, 7, nullptr);
        writer.WriteString(value.client);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 7, nullptr);
    }

    writer.WriteStructEnd(isBase);
}

template<typename TWriter>
void Serialize(TWriter& writer, ::AriaProtocol::User const& value, bool isBase)
{
    writer.WriteStructBegin(nullptr, isBase);

    if (!value.id.empty()) {
        writer.WriteFieldBegin(BT_STRING, 1, nullptr);
        writer.WriteString(value.id);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 1, nullptr);
    }

    if (!value.localId.empty()) {
        writer.WriteFieldBegin(BT_STRING, 2, nullptr);
        writer.WriteString(value.localId);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 2, nullptr);
    }

    if (!value.authId.empty()) {
        writer.WriteFieldBegin(BT_STRING, 3, nullptr);
        writer.WriteString(value.authId);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 3, nullptr);
    }

    writer.WriteStructEnd(isBase);
}

template<typename TWriter>
void Serialize(TWriter& writer, ::AriaProtocol::Device const& value, bool isBase)
{
    writer.WriteStructBegin(nullptr, isBase);

    if (!value.id.empty()) {
        writer.WriteFieldBegin(BT_STRING, 1, nullptr);
        writer.WriteString(value.id);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 1, nullptr);
    }

    if (!value.localId.empty()) {
        writer.WriteFieldBegin(BT_STRING, 2, nullptr);
        writer.WriteString(value.localId);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 2, nullptr);
    }

    if (!value.authId.empty()) {
        writer.WriteFieldBegin(BT_STRING, 3, nullptr);
        writer.WriteString(value.authId);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 3, nullptr);
    }

    if (!value.authSecId.empty()) {
        writer.WriteFieldBegin(BT_STRING, 4, nullptr);
        writer.WriteString(value.authSecId);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 4, nullptr);
    }

    if (!value.deviceClass.empty()) {
        writer.WriteFieldBegin(BT_STRING, 5, nullptr);
        writer.WriteString(value.deviceClass);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 5, nullptr);
    }

    if (!value.orgId.empty()) {
        writer.WriteFieldBegin(BT_STRING, 6, nullptr);
        writer.WriteString(value.orgId);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 6, nullptr);
    }

    if (!value.orgAuthId.empty()) {
        writer.WriteFieldBegin(BT_STRING, 7, nullptr);
        writer.WriteString(value.orgAuthId);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 7, nullptr);
    }

    writer.WriteStructEnd(isBase);
}

template<typename TWriter>
void Serialize(TWriter& writer, ::AriaProtocol::Os const& value, bool isBase)
{
    writer.WriteStructBegin(nullptr, isBase);

    if (!value.locale.empty()) {
        writer.WriteFieldBegin(BT_STRING, 1, nullptr);
        writer.WriteString(value.locale);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 1, nullptr);
    }

    if (!value.expId.empty()) {
        writer.WriteFieldBegin(BT_STRING, 2, nullptr);
        writer.WriteString(value.expId);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 2, nullptr);
    }

    if (value.bootId != 0) {
        writer.WriteFieldBegin(BT_INT32, 3, nullptr);
        writer.WriteInt32(value.bootId);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_INT32, 3, nullptr);
    }

    writer.WriteStructEnd(isBase);
}

template<typename TWriter>
void Serialize(TWriter& writer, ::AriaProtocol::App const& value, bool isBase)
{
    writer.WriteStructBegin(nullptr, isBase);

    if (!value.expId.empty()) {
        writer.WriteFieldBegin(BT_STRING, 1, nullptr);
        writer.WriteString(value.expId);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 1, nullptr);
    }

    if (!value.userId.empty()) {
        writer.WriteFieldBegin(BT_STRING, 2, nullptr);
        writer.WriteString(value.userId);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 2, nullptr);
    }

    if (!value.env.empty()) {
        writer.WriteFieldBegin(BT_STRING, 3, nullptr);
        writer.WriteString(value.env);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 3, nullptr);
    }

    if (value.asId != 0) {
        writer.WriteFieldBegin(BT_INT32, 4, nullptr);
        writer.WriteInt32(value.asId);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_INT32, 4, nullptr);
    }

    writer.WriteStructEnd(isBase);
}

template<typename TWriter>
void Serialize(TWriter& writer, ::AriaProtocol::Utc const& value, bool isBase)
{
    writer.WriteStructBegin(nullptr, isBase);

    if (!value.stId.empty()) {
        writer.WriteFieldBegin(BT_STRING, 1, nullptr);
        writer.WriteString(value.stId);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 1, nullptr);
    }

    if (!value.aId.empty()) {
        writer.WriteFieldBegin(BT_STRING, 2, nullptr);
        writer.WriteString(value.aId);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 2, nullptr);
    }

    if (!value.raId.empty()) {
        writer.WriteFieldBegin(BT_STRING, 3, nullptr);
        writer.WriteString(value.raId);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 3, nullptr);
    }

    if (!value.op.empty()) {
        writer.WriteFieldBegin(BT_STRING, 4, nullptr);
        writer.WriteString(value.op);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 4, nullptr);
    }

    if (value.cat != 0) {
        writer.WriteFieldBegin(BT_INT64, 5, nullptr);
        writer.WriteInt64(value.cat);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_INT64, 5, nullptr);
    }

    if (value.flags != 0) {
        writer.WriteFieldBegin(BT_INT64, 6, nullptr);
        writer.WriteInt64(value.flags);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_INT64, 6, nullptr);
    }

    if (!value.sqmId.empty()) {
        writer.WriteFieldBegin(BT_STRING, 7, nullptr);
        writer.WriteString(value.sqmId);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 7, nullptr);
    }

    if (!value.mon.empty()) {
        writer.WriteFieldBegin(BT_STRING, 9, nullptr);
        writer.WriteString(value.mon);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 9, nullptr);
    }

    if (value.cpId != 0) {
        writer.WriteFieldBegin(BT_INT32, 10, nullptr);
        writer.WriteInt32(value.cpId);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_INT32, 10, nullptr);
    }

    if (!value.bSeq.empty()) {
        writer.WriteFieldBegin(BT_STRING, 11, nullptr);
        writer.WriteString(value.bSeq);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 11, nullptr);
    }

    writer.WriteStructEnd(isBase);
}

template<typename TWriter>
void Serialize(TWriter& writer, ::AriaProtocol::Xbl const& value, bool isBase)
{
    writer.WriteStructBegin(nullptr, isBase);

    if (!value.claims.empty()) {
        writer.WriteFieldBegin(BT_MAP, 5, nullptr);
        writer.WriteMapContainerBegin(value.claims.size(), BT_STRING, BT_STRING);
        for (auto const& item2 : value.claims) {
            writer.WriteString(item2.first);
            writer.WriteString(item2.second);
        }
        writer.WriteContainerEnd();
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_MAP, 5, nullptr);
    }

    if (!value.nbf.empty()) {
        writer.WriteFieldBegin(BT_STRING, 10, nullptr);
        writer.WriteString(value.nbf);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 10, nullptr);
    }

    if (!value.exp.empty()) {
        writer.WriteFieldBegin(BT_STRING, 20, nullptr);
        writer.WriteString(value.exp);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 20, nullptr);
    }

    if (!value.sbx.empty()) {
        writer.WriteFieldBegin(BT_STRING, 30, nullptr);
        writer.WriteString(value.sbx);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 30, nullptr);
    }

    if (!value.dty.empty()) {
        writer.WriteFieldBegin(BT_STRING, 40, nullptr);
        writer.WriteString(value.dty);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 40, nullptr);
    }

    if (!value.did.empty()) {
        writer.WriteFieldBegin(BT_STRING, 50, nullptr);
        writer.WriteString(value.did);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 50, nullptr);
    }

    if (!value.xid.empty()) {
        writer.WriteFieldBegin(BT_STRING, 60, nullptr);
        writer.WriteString(value.xid);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 60, nullptr);
    }

    if (value.uts != 0) {
        writer.WriteFieldBegin(BT_UINT64, 70, nullptr);
        writer.WriteUInt64(value.uts);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_UINT64, 70, nullptr);
    }

    if (!value.pid.empty()) {
        writer.WriteFieldBegin(BT_STRING, 80, nullptr);
        writer.WriteString(value.pid);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 80, nullptr);
    }

    if (!value.dvr.empty()) {
        writer.WriteFieldBegin(BT_STRING, 90, nullptr);
        writer.WriteString(value.dvr);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 90, nullptr);
    }

    if (value.tid != 0) {
        writer.WriteFieldBegin(BT_UINT32, 100, nullptr);
        writer.WriteUInt32(value.tid);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_UINT32, 100, nullptr);
    }

    if (!value.tvr.empty()) {
        writer.WriteFieldBegin(BT_STRING, 110, nullptr);
        writer.WriteString(value.tvr);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 110, nullptr);
    }

    if (!value.sty.empty()) {
        writer.WriteFieldBegin(BT_STRING, 120, nullptr);
        writer.WriteString(value.sty);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 120, nullptr);
    }

    if (!value.sid.empty()) {
        writer.WriteFieldBegin(BT_STRING, 130, nullptr);
        writer.WriteString(value.sid);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 130, nullptr);
    }

    if (value.eid != 0) {
        writer.WriteFieldBegin(BT_INT64, 140, nullptr);
        writer.WriteInt64(value.eid);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_INT64, 140, nullptr);
    }

    if (!value.ip.empty()) {
        writer.WriteFieldBegin(BT_STRING, 150, nullptr);
        writer.WriteString(value.ip);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 150, nullptr);
    }

    writer.WriteStructEnd(isBase);
}

template<typename TWriter>
void Serialize(TWriter& writer, ::AriaProtocol::Javascript const& value, bool isBase)
{
    writer.WriteStructBegin(nullptr, isBase);

    if (!value.libVer.empty()) {
        writer.WriteFieldBegin(BT_STRING, 10, nullptr);
        writer.WriteString(value.libVer);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 10, nullptr);
    }

    if (!value.osName.empty()) {
        writer.WriteFieldBegin(BT_STRING, 15, nullptr);
        writer.WriteString(value.osName);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 15, nullptr);
    }

    if (!value.browser.empty()) {
        writer.WriteFieldBegin(BT_STRING, 20, nullptr);
        writer.WriteString(value.browser);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 20, nullptr);
    }

    if (!value.browserVersion.empty()) {
        writer.WriteFieldBegin(BT_STRING, 21, nullptr);
        writer.WriteString(value.browserVersion);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 21, nullptr);
    }

    if (!value.platform.empty()) {
        writer.WriteFieldBegin(BT_STRING, 25, nullptr);
        writer.WriteString(value.platform);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 25, nullptr);
    }

    if (!value.make.empty()) {
        writer.WriteFieldBegin(BT_STRING, 30, nullptr);
        writer.WriteString(value.make);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 30, nullptr);
    }

    if (!value.model.empty()) {
        writer.WriteFieldBegin(BT_STRING, 35, nullptr);
        writer.WriteString(value.model);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 35, nullptr);
    }

    if (!value.screenSize.empty()) {
        writer.WriteFieldBegin(BT_STRING, 40, nullptr);
        writer.WriteString(value.screenSize);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 40, nullptr);
    }

    if (!value.mc1Id.empty()) {
        writer.WriteFieldBegin(BT_STRING, 50, nullptr);
        writer.WriteString(value.mc1Id);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 50, nullptr);
    }

    if (value.mc1Lu != 0) {
        writer.WriteFieldBegin(BT_UINT64, 60, nullptr);
        writer.WriteUInt64(value.mc1Lu);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_UINT64, 60, nullptr);
    }

    if (value.isMc1New != false) {
        writer.WriteFieldBegin(BT_BOOL, 70, nullptr);
        writer.WriteBool(value.isMc1New);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_BOOL, 70, nullptr);
    }

    if (!value.ms0.empty()) {
        writer.WriteFieldBegin(BT_STRING, 80, nullptr);
        writer.WriteString(value.ms0);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 80, nullptr);
    }

    if (!value.anid.empty()) {
        writer.WriteFieldBegin(BT_STRING, 90, nullptr);
        writer.WriteString(value.anid);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 90, nullptr);
    }

    if (!value.a.empty()) {
        writer.WriteFieldBegin(BT_STRING, 100, nullptr);
        writer.WriteString(value.a);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 100, nullptr);
    }

    if (!value.msResearch.empty()) {
        writer.WriteFieldBegin(BT_STRING, 110, nullptr);
        writer.WriteString(value.msResearch);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 110, nullptr);
    }

    if (!value.csrvc.empty()) {
        writer.WriteFieldBegin(BT_STRING, 120, nullptr);
        writer.WriteString(value.csrvc);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 120, nullptr);
    }

    if (!value.rtCell.empty()) {
        writer.WriteFieldBegin(BT_STRING, 130, nullptr);
        writer.WriteString(value.rtCell);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 130, nullptr);
    }

    if (!value.rtEndAction.empty()) {
        writer.WriteFieldBegin(BT_STRING, 140, nullptr);
        writer.WriteString(value.rtEndAction);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 140, nullptr);
    }

    if (!value.rtPermId.empty()) {
        writer.WriteFieldBegin(BT_STRING, 150, nullptr);
        writer.WriteString(value.rtPermId);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 150, nullptr);
    }

    if (!value.r.empty()) {
        writer.WriteFieldBegin(BT_STRING, 160, nullptr);
        writer.WriteString(value.r);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 160, nullptr);
    }

    if (!value.wtFpc.empty()) {
        writer.WriteFieldBegin(BT_STRING, 170, nullptr);
        writer.WriteString(value.wtFpc);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 170, nullptr);
    }

    if (!value.omniId.empty()) {
        writer.WriteFieldBegin(BT_STRING, 180, nullptr);
        writer.WriteString(value.omniId);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 180, nullptr);
    }

    if (!value.gsfxSession.empty()) {
        writer.WriteFieldBegin(BT_STRING, 190, nullptr);
        writer.WriteString(value.gsfxSession);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 190, nullptr);
    }

    if (!value.domain.empty()) {
        writer.WriteFieldBegin(BT_STRING, 200, nullptr);
        writer.WriteString(value.domain);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 200, nullptr);
    }

    if (!value.dnt.empty()) {
        writer.WriteFieldBegin(BT_STRING, 999, nullptr);
        writer.WriteString(value.dnt);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 999, nullptr);
    }

    writer.WriteStructEnd(isBase);
}

template<typename TWriter>
void Serialize(TWriter& writer, ::AriaProtocol::Protocol const& value, bool isBase)
{
    writer.WriteStructBegin(nullptr, isBase);

    if (value.metadataCrc != 0) {
        writer.WriteFieldBegin(BT_INT32, 1, nullptr);
        writer.WriteInt32(value.metadataCrc);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_INT32, 1, nullptr);
    }

    if (!value.ticketKeys.empty()) {
        writer.WriteFieldBegin(BT_LIST, 2, nullptr);
        writer.WriteContainerBegin(value.ticketKeys.size(), BT_LIST);
        for (auto const& item2 : value.ticketKeys) {
            writer.WriteContainerBegin(item2.size(), BT_STRING);
            for (auto const& item3 : item2) {
                writer.WriteString(item3);
            }
            writer.WriteContainerEnd();
        }
        writer.WriteContainerEnd();
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_LIST, 2, nullptr);
    }

    writer.WriteStructEnd(isBase);
}

template<typename TWriter>
void Serialize(TWriter& writer, ::AriaProtocol::PII const& value, bool isBase)
{
    writer.WriteStructBegin(nullptr, isBase);

    static_assert(sizeof(value.Kind) == 4, "Invalid size of enum");
    if (value.Kind != ::AriaProtocol::PIIKind::NotSet) {
        writer.WriteFieldBegin(BT_INT32, 1, nullptr);
        writer.WriteInt32(static_cast<int32_t>(value.Kind));
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_INT32, 1, nullptr);
    }

    writer.WriteStructEnd(isBase);
}

template<typename TWriter>
void Serialize(TWriter& writer, ::AriaProtocol::CustomerContent const& value, bool isBase)
{
    writer.WriteStructBegin(nullptr, isBase);

    static_assert(sizeof(value.Kind) == 4, "Invalid size of enum");
    if (value.Kind != ::AriaProtocol::CustomerContentKind::NotSet) {
        writer.WriteFieldBegin(BT_INT32, 1, nullptr);
        writer.WriteInt32(static_cast<int32_t>(value.Kind));
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_INT32, 1, nullptr);
    }

    writer.WriteStructEnd(isBase);
}

template<typename TWriter>
void Serialize(TWriter& writer, ::AriaProtocol::Attributes const& value, bool isBase)
{
    writer.WriteStructBegin(nullptr, isBase);

    if (!value.pii.empty()) {
        writer.WriteFieldBegin(BT_LIST, 1, nullptr);
        writer.WriteContainerBegin(value.pii.size(), BT_STRUCT);
        for (auto const& item2 : value.pii) {
            Serialize(writer, item2, false);
        }
        writer.WriteContainerEnd();
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_LIST, 1, nullptr);
    }

    if (!value.customerContent.empty()) {
        writer.WriteFieldBegin(BT_LIST, 2, nullptr);
        writer.WriteContainerBegin(value.customerContent.size(), BT_STRUCT);
        for (auto const& item2 : value.customerContent) {
            Serialize(writer, item2, false);
        }
        writer.WriteContainerEnd();
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_LIST, 2, nullptr);
    }

    writer.WriteStructEnd(isBase);
}

template<typename TWriter>
void Serialize(TWriter& writer, ::AriaProtocol::Value const& value, bool isBase)
{
    writer.WriteStructBegin(nullptr, isBase);

    static_assert(sizeof(value.type) == 4, "Invalid size of enum");
    if (value.type != ::AriaProtocol::ValueKind::ValueString) {
        writer.WriteFieldBegin(BT_INT32, 1, nullptr);
        writer.WriteInt32(static_cast<int32_t>(value.type));
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_INT32, 1, nullptr);
    }

    if (!value.attributes.empty()) {
        writer.WriteFieldBegin(BT_LIST, 2, nullptr);
        writer.WriteContainerBegin(value.attributes.size(), BT_STRUCT);
        for (auto const& item2 : value.attributes) {
            Serialize(writer, item2, false);
        }
        writer.WriteContainerEnd();
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_LIST, 2, nullptr);
    }

    if (!value.stringValue.empty()) {
        writer.WriteFieldBegin(BT_STRING, 3, nullptr);
        writer.WriteString(value.stringValue);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 3, nullptr);
    }

    if (value.longValue != 0) {
        writer.WriteFieldBegin(BT_INT64, 4, nullptr);
        writer.WriteInt64(value.longValue);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_INT64, 4, nullptr);
    }

    if (value.doubleValue != 0.0) {
        writer.WriteFieldBegin(BT_DOUBLE, 5, nullptr);
        writer.WriteDouble(value.doubleValue);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_DOUBLE, 5, nullptr);
    }

    if (!value.guidValue.empty()) {
        writer.WriteFieldBegin(BT_LIST, 6, nullptr);
        writer.WriteContainerBegin(value.guidValue.size(), BT_LIST);
        for (auto const& item2 : value.guidValue) {
            writer.WriteContainerBegin(item2.size(), BT_UINT8);
            for (auto const& item3 : item2) {
                writer.WriteUInt8(item3);
            }
            writer.WriteContainerEnd();
        }
        writer.WriteContainerEnd();
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_LIST, 6, nullptr);
    }

    if (!value.stringArray.empty()) {
        writer.WriteFieldBegin(BT_LIST, 10, nullptr);
        writer.WriteContainerBegin(value.stringArray.size(), BT_LIST);
        for (auto const& item2 : value.stringArray) {
            writer.WriteContainerBegin(item2.size(), BT_STRING);
            for (auto const& item3 : item2) {
                writer.WriteString(item3);
            }
            writer.WriteContainerEnd();
        }
        writer.WriteContainerEnd();
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_LIST, 10, nullptr);
    }

    if (!value.longArray.empty()) {
        writer.WriteFieldBegin(BT_LIST, 11, nullptr);
        writer.WriteContainerBegin(value.longArray.size(), BT_LIST);
        for (auto const& item2 : value.longArray) {
            writer.WriteContainerBegin(item2.size(), BT_INT64);
            for (auto const& item3 : item2) {
                writer.WriteInt64(item3);
            }
            writer.WriteContainerEnd();
        }
        writer.WriteContainerEnd();
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_LIST, 11, nullptr);
    }

    if (!value.doubleArray.empty()) {
        writer.WriteFieldBegin(BT_LIST, 12, nullptr);
        writer.WriteContainerBegin(value.doubleArray.size(), BT_LIST);
        for (auto const& item2 : value.doubleArray) {
            writer.WriteContainerBegin(item2.size(), BT_DOUBLE);
            for (auto const& item3 : item2) {
                writer.WriteDouble(item3);
            }
            writer.WriteContainerEnd();
        }
        writer.WriteContainerEnd();
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_LIST, 12, nullptr);
    }

    if (!value.guidArray.empty()) {
        writer.WriteFieldBegin(BT_LIST, 13, nullptr);
        writer.WriteContainerBegin(value.guidArray.size(), BT_LIST);
        for (auto const& item2 : value.guidArray) {
            writer.WriteContainerBegin(item2.size(), BT_LIST);
            for (auto const& item3 : item2) {
                writer.WriteContainerBegin(item3.size(), BT_INT64);
                for (auto const& item4 : item3) {
                    writer.WriteInt64(item4);
                }
                writer.WriteContainerEnd();
            }
            writer.WriteContainerEnd();
        }
        writer.WriteContainerEnd();
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_LIST, 13, nullptr);
    }

    writer.WriteStructEnd(isBase);
}

template<typename TWriter>
void Serialize(TWriter& writer, ::AriaProtocol::Data const& value, bool isBase)
{
    writer.WriteStructBegin(nullptr, isBase);

    if (!value.properties.empty()) {
        writer.WriteFieldBegin(BT_MAP, 1, nullptr);
        writer.WriteMapContainerBegin(value.properties.size(), BT_STRING, BT_STRUCT);
        for (auto const& item2 : value.properties) {
            writer.WriteString(item2.first);
            Serialize(writer, item2.second, false);
        }
        writer.WriteContainerEnd();
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_MAP, 1, nullptr);
    }

    writer.WriteStructEnd(isBase);
}

template<typename TWriter>
void Serialize(TWriter& writer, ::AriaProtocol::CsEvent const& value, bool isBase)
{
    writer.WriteStructBegin(nullptr, isBase);

    if (!value.ver.empty()) {
        writer.WriteFieldBegin(BT_STRING, 1, nullptr);
        writer.WriteString(value.ver);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 1, nullptr);
    }

    if (!value.name.empty()) {
        writer.WriteFieldBegin(BT_STRING, 2, nullptr);
        writer.WriteString(value.name);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 2, nullptr);
    }

    if (value.time != 0) {
        writer.WriteFieldBegin(BT_INT64, 3, nullptr);
        writer.WriteInt64(value.time);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_INT64, 3, nullptr);
    }

    if (value.popSample != 100) {
        writer.WriteFieldBegin(BT_DOUBLE, 4, nullptr);
        writer.WriteDouble(value.popSample);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_DOUBLE, 4, nullptr);
    }

    if (!value.epoch.empty()) {
        writer.WriteFieldBegin(BT_STRING, 5, nullptr);
        writer.WriteString(value.epoch);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 5, nullptr);
    }

    if (value.seqNum != 0) {
        writer.WriteFieldBegin(BT_INT64, 6, nullptr);
        writer.WriteInt64(value.seqNum);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_INT64, 6, nullptr);
    }

    if (!value.iKey.empty()) {
        writer.WriteFieldBegin(BT_STRING, 7, nullptr);
        writer.WriteString(value.iKey);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 7, nullptr);
    }

    if (value.flags != 0) {
        writer.WriteFieldBegin(BT_INT64, 8, nullptr);
        writer.WriteInt64(value.flags);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_INT64, 8, nullptr);
    }

    if (!value.os.empty()) {
        writer.WriteFieldBegin(BT_STRING, 9, nullptr);
        writer.WriteString(value.os);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 9, nullptr);
    }

    if (!value.osVer.empty()) {
        writer.WriteFieldBegin(BT_STRING, 10, nullptr);
        writer.WriteString(value.osVer);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 10, nullptr);
    }

    if (!value.appId.empty()) {
        writer.WriteFieldBegin(BT_STRING, 11, nullptr);
        writer.WriteString(value.appId);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 11, nullptr);
    }

    if (!value.appVer.empty()) {
        writer.WriteFieldBegin(BT_STRING, 12, nullptr);
        writer.WriteString(value.appVer);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 12, nullptr);
    }

    if (!value.cV.empty()) {
        writer.WriteFieldBegin(BT_STRING, 13, nullptr);
        writer.WriteString(value.cV);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 13, nullptr);
    }

    if (!value.extIngest.empty()) {
        writer.WriteFieldBegin(BT_LIST, 20, nullptr);
        writer.WriteContainerBegin(value.extIngest.size(), BT_STRUCT);
        for (auto const& item2 : value.extIngest) {
            Serialize(writer, item2, false);
        }
        writer.WriteContainerEnd();
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_LIST, 20, nullptr);
    }

    if (!value.extProtocol.empty()) {
        writer.WriteFieldBegin(BT_LIST, 21, nullptr);
        writer.WriteContainerBegin(value.extProtocol.size(), BT_STRUCT);
        for (auto const& item2 : value.extProtocol) {
            Serialize(writer, item2, false);
        }
        writer.WriteContainerEnd();
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_LIST, 21, nullptr);
    }

    if (!value.extUser.empty()) {
        writer.WriteFieldBegin(BT_LIST, 22, nullptr);
        writer.WriteContainerBegin(value.extUser.size(), BT_STRUCT);
        for (auto const& item2 : value.extUser) {
            Serialize(writer, item2, false);
        }
        writer.WriteContainerEnd();
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_LIST, 22, nullptr);
    }

    if (!value.extDevice.empty()) {
        writer.WriteFieldBegin(BT_LIST, 23, nullptr);
        writer.WriteContainerBegin(value.extDevice.size(), BT_STRUCT);
        for (auto const& item2 : value.extDevice) {
            Serialize(writer, item2, false);
        }
        writer.WriteContainerEnd();
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_LIST, 23, nullptr);
    }

    if (!value.extOs.empty()) {
        writer.WriteFieldBegin(BT_LIST, 24, nullptr);
        writer.WriteContainerBegin(value.extOs.size(), BT_STRUCT);
        for (auto const& item2 : value.extOs) {
            Serialize(writer, item2, false);
        }
        writer.WriteContainerEnd();
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_LIST, 24, nullptr);
    }

    if (!value.extApp.empty()) {
        writer.WriteFieldBegin(BT_LIST, 25, nullptr);
        writer.WriteContainerBegin(value.extApp.size(), BT_STRUCT);
        for (auto const& item2 : value.extApp) {
            Serialize(writer, item2, false);
        }
        writer.WriteContainerEnd();
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_LIST, 25, nullptr);
    }

    if (!value.extUtc.empty()) {
        writer.WriteFieldBegin(BT_LIST, 26, nullptr);
        writer.WriteContainerBegin(value.extUtc.size(), BT_STRUCT);
        for (auto const& item2 : value.extUtc) {
            Serialize(writer, item2, false);
        }
        writer.WriteContainerEnd();
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_LIST, 26, nullptr);
    }

    if (!value.extXbl.empty()) {
        writer.WriteFieldBegin(BT_LIST, 27, nullptr);
        writer.WriteContainerBegin(value.extXbl.size(), BT_STRUCT);
        for (auto const& item2 : value.extXbl) {
            Serialize(writer, item2, false);
        }
        writer.WriteContainerEnd();
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_LIST, 27, nullptr);
    }

    if (!value.extJavascript.empty()) {
        writer.WriteFieldBegin(BT_LIST, 28, nullptr);
        writer.WriteContainerBegin(value.extJavascript.size(), BT_STRUCT);
        for (auto const& item2 : value.extJavascript) {
            Serialize(writer, item2, false);
        }
        writer.WriteContainerEnd();
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_LIST, 28, nullptr);
    }

    if (!value.ext.empty()) {
        writer.WriteFieldBegin(BT_LIST, 41, nullptr);
        writer.WriteContainerBegin(value.ext.size(), BT_STRUCT);
        for (auto const& item2 : value.ext) {
            Serialize(writer, item2, false);
        }
        writer.WriteContainerEnd();
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_LIST, 41, nullptr);
    }

    if (!value.tags.empty()) {
        writer.WriteFieldBegin(BT_MAP, 51, nullptr);
        writer.WriteMapContainerBegin(value.tags.size(), BT_STRING, BT_STRING);
        for (auto const& item2 : value.tags) {
            writer.WriteString(item2.first);
            writer.WriteString(item2.second);
        }
        writer.WriteContainerEnd();
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_MAP, 51, nullptr);
    }

    if (!value.baseType.empty()) {
        writer.WriteFieldBegin(BT_STRING, 60, nullptr);
        writer.WriteString(value.baseType);
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_STRING, 60, nullptr);
    }

    if (!value.baseData.empty()) {
        writer.WriteFieldBegin(BT_LIST, 61, nullptr);
        writer.WriteContainerBegin(value.baseData.size(), BT_STRUCT);
        for (auto const& item2 : value.baseData) {
            Serialize(writer, item2, false);
        }
        writer.WriteContainerEnd();
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_LIST, 61, nullptr);
    }

    if (!value.data.empty()) {
        writer.WriteFieldBegin(BT_LIST, 70, nullptr);
        writer.WriteContainerBegin(value.data.size(), BT_STRUCT);
        for (auto const& item2 : value.data) {
            Serialize(writer, item2, false);
        }
        writer.WriteContainerEnd();
        writer.WriteFieldEnd();
    } else {
        writer.WriteFieldOmitted(BT_LIST, 70, nullptr);
    }

    writer.WriteStructEnd(isBase);
}

} // namespace bond_lite
