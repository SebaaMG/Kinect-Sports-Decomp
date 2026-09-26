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


undefined8 fn_82A969B8(int *param_1)

{
  int iVar1;
  undefined8 in_r0;
  
  iVar1 = param_1[2];
  if (iVar1 == 8) {
    return 0xffffffff82a95a58;
  }
  if (iVar1 == 0x10) {
    if ((*param_1 == 1) &&
       ((((LZCOUNT((uint)param_1[7] >> (param_1[0xb] & 0x3fU)) == 0x10 ||
          (LZCOUNT((uint)param_1[8] >> (param_1[0xc] & 0x3fU)) == 0x10)) ||
         (LZCOUNT((uint)param_1[9] >> (param_1[0xd] & 0x3fU)) == 0x10)) ||
        (LZCOUNT((uint)param_1[10] >> (param_1[0xe] & 0x3fU)) == 0x10)))) {
      return 0xffffffff82a95b28;
    }
    return 0xffffffff82a95aa8;
  }
  if (iVar1 != 0x20) {
    trapWord(0x1f,in_r0,0x16);
    return 0;
  }
  if ((*param_1 == 1) &&
     (((LZCOUNT((uint)param_1[7] >> (param_1[0xb] & 0x3fU)) == 0x10 ||
       (LZCOUNT((uint)param_1[8] >> (param_1[0xc] & 0x3fU)) == 0x10)) ||
      ((LZCOUNT((uint)param_1[9] >> (param_1[0xd] & 0x3fU)) == 0x10 ||
       (LZCOUNT((uint)param_1[10] >> (param_1[0xe] & 0x3fU)) == 0x10)))))) {
    return 0xffffffff82a95c48;
  }
  return 0xffffffff82a95bc8;
}

