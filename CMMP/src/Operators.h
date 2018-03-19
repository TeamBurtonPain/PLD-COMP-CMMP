#pragma once


enum class OpUnaryAffectation {
    DECR,
    INCR
};

enum class OpBinaryAffectation {
    ADDAFF,
    AFF,
    SUBAFF,
    DIVAFF,
    MULTAFF,
    MODAFF
};

enum class UnaryOp {
    NOT,
    MINUS
};

enum class BinaryOp {
    ADD,
    SUB,
    MULT,
    DIV,
    MOD,
    AND,
    ANDBOOL,
    OR,
    ORBOOL,
    NEQ,
    EQ,
    INF,
    INFEQ,
    SUP,
    SUPEQ
};