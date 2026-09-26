typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_82F65AC0();


bool fn_82E1DAA8(undefined8 param_1,ulonglong param_2)

{
  int iVar1;
  bool bVar2;
  
  if ((param_2 & 0xffffffff) == 0) {
    bVar2 = false;
  }
  else {
    iVar1 = fn_82F65AC0(param_2,0xffffffff8214b994);
    if ((((((((iVar1 == 0) || (iVar1 = fn_82F65AC0(param_2,0xffffffff8214b988), iVar1 == 0)) ||
            (iVar1 = fn_82F65AC0(param_2,0xffffffff8214b7bc), iVar1 == 0)) ||
           (((iVar1 = fn_82F65AC0(param_2,0xffffffff8214b97c), iVar1 == 0 ||
             (iVar1 = fn_82F65AC0(param_2,0xffffffff8214b964), iVar1 == 0)) ||
            ((iVar1 = fn_82F65AC0(param_2,0xffffffff8214b958), iVar1 == 0 ||
             ((iVar1 = fn_82F65AC0(param_2,0xffffffff8214b7b0), iVar1 == 0 ||
              (iVar1 = fn_82F65AC0(param_2,0xffffffff8214b7a8), iVar1 == 0)))))))) ||
          (iVar1 = fn_82F65AC0(param_2,0xffffffff8214b940), iVar1 == 0)) ||
         ((((((iVar1 = fn_82F65AC0(param_2,0xffffffff8214b7e4), iVar1 == 0 ||
              (iVar1 = fn_82F65AC0(param_2,0xffffffff8214b934), iVar1 == 0)) ||
             (iVar1 = fn_82F65AC0(param_2,0xffffffff8214b928), iVar1 == 0)) ||
            ((iVar1 = fn_82F65AC0(param_2,0xffffffff8214b91c), iVar1 == 0 ||
             (iVar1 = fn_82F65AC0(param_2,0xffffffff8214b914), iVar1 == 0)))) ||
           (iVar1 = fn_82F65AC0(param_2,0xffffffff8214b90c), iVar1 == 0)) ||
          (((iVar1 = fn_82F65AC0(param_2,0xffffffff8214b904), iVar1 == 0 ||
            (iVar1 = fn_82F65AC0(param_2,0xffffffff82197420), iVar1 == 0)) ||
           (((iVar1 = fn_82F65AC0(param_2,0xffffffff8214b8f8), iVar1 == 0 ||
             (((iVar1 = fn_82F65AC0(param_2,0xffffffff8214b8f0), iVar1 == 0 ||
               (iVar1 = fn_82F65AC0(param_2,0xffffffff8214b8e4), iVar1 == 0)) ||
              (iVar1 = fn_82F65AC0(param_2,0xffffffff8214b8d4), iVar1 == 0)))) ||
            (((iVar1 = fn_82F65AC0(param_2,0xffffffff8214b8c8), iVar1 == 0 ||
              (iVar1 = fn_82F65AC0(param_2,0xffffffff8214b8bc), iVar1 == 0)) ||
             (iVar1 = fn_82F65AC0(param_2,0xffffffff8214b8ac), iVar1 == 0)))))))))) ||
        (((iVar1 = fn_82F65AC0(param_2,0xffffffff8214b89c), iVar1 == 0 ||
          (iVar1 = fn_82F65AC0(param_2,0xffffffff8214b894), iVar1 == 0)) ||
         ((iVar1 = fn_82F65AC0(param_2,0xffffffff8214b880), iVar1 == 0 ||
          (((iVar1 = fn_82F65AC0(param_2,0xffffffff8214b7f0), iVar1 == 0 ||
            (iVar1 = fn_82F65AC0(param_2,0xffffffff8214b878), iVar1 == 0)) ||
           (iVar1 = fn_82F65AC0(param_2,0xffffffff8214b86c), iVar1 == 0)))))))) ||
       ((iVar1 = fn_82F65AC0(param_2,0xffffffff8214b85c), iVar1 == 0 ||
        (iVar1 = fn_82F65AC0(param_2,0xffffffff8214b7c4), iVar1 == 0)))) {
      bVar2 = true;
    }
    else {
      iVar1 = fn_82F65AC0(param_2,0xffffffff8214b848);
      bVar2 = iVar1 == 0;
    }
  }
  return bVar2;
}

