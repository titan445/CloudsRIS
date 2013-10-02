#pragma once
/* 
 * File:   UdpOnce.cpp
 * Author: vfs
 * 
 * Created on 29 Сентябрь 2013 г., 1:33
 */

#include "UdpOnce.h"

UdpOnce::UdpOnce(boost::asio::io_service& io_service,
        udp::endpoint& listenAddress, string idStr) :
udp_server(io_service, listenAddress, idStr) {

}


void UdpOnce::handle_receive(const boost::system::error_code& error,
        std::size_t bytes_transferred) {
    if (!error || error == boost::asio::error::message_size) {
        cout << "data responce in one clients" << endl;

        start_receive();
    }
}

void UdpOnce::handle_send(boost::shared_ptr<std::string> message,
        const boost::system::error_code& error,
        std::size_t bytes_transferred) {

}

UdpOnce::~UdpOnce() {
}
