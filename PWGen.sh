#!/bin/bash

generate_password() {
    local length=${1:-12}
    tr -dc 'a-zA-Z0-9!@#$%^&*()-_=+' </dev/urandom | head -c "$length"
    echo
}

# Example usage:
generate_password 16
