/*
Tencent is pleased to support the open source community by making PhxQueue available.
Copyright (C) 2017 THL A29 Limited, a Tencent company. All rights reserved.
Licensed under the BSD 3-Clause License (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

<https://opensource.org/licenses/BSD-3-Clause>

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
*/



/* phxrpc_store_stub.cpp

 Generated by phxrpc_pb2client from store.proto

 Please DO NOT edit unless you know exactly what you are doing.

*/

#include "phxrpc_store_stub.h"

#include "phxrpc/network.h"
#include "phxrpc/rpc.h"

#include "store.pb.h"


StoreStub::StoreStub(phxrpc::BaseTcpStream &socket, phxrpc::ClientMonitor &client_monitor)
        : socket_(socket), client_monitor_(client_monitor), keep_alive_(false) {}

StoreStub::~StoreStub() {}

void StoreStub::SetKeepAlive(const bool keep_alive) {
    keep_alive_ = keep_alive;
}

int StoreStub::PHXEcho(const google::protobuf::StringValue &req,
                       google::protobuf::StringValue *resp) {
    phxrpc::HttpCaller caller(socket_, client_monitor_);
    caller.SetURI("/phxqueue_phxrpc.store/PHXEcho", -1);
    caller.SetKeepAlive(keep_alive_);
    return caller.Call(req, resp);
}

int StoreStub::Add(const phxqueue::comm::proto::AddRequest &req,
                   phxqueue::comm::proto::AddResponse *resp) {
    phxrpc::HttpCaller caller(socket_, client_monitor_);
    caller.SetURI("/phxqueue_phxrpc.store/Add", 1);
    caller.SetKeepAlive(keep_alive_);
    return caller.Call(req, resp);
}

int StoreStub::Get(const phxqueue::comm::proto::GetRequest &req,
                   phxqueue::comm::proto::GetResponse *resp) {
    phxrpc::HttpCaller caller(socket_, client_monitor_);
    caller.SetURI("/phxqueue_phxrpc.store/Get", 2);
    caller.SetKeepAlive(keep_alive_);
    return caller.Call(req, resp);
}

