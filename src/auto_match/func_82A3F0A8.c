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
extern int fn_82A3EB70();
extern int fn_82A3F208();


bool fn_82A3F0A8(int param_1)

{
  char cVar1;
  
  cVar1 = fn_82A3EB70(param_1,0x100,param_1 + 0x2b14,param_1 + 0xa18);
  if (((cVar1 != '\0') &&
      (cVar1 = fn_82A3EB70(param_1,(ulonglong)*(byte *)(param_1 + 0x2eb5) << 3,param_1 + 0x2c14,
                             param_1 + 0xb18), cVar1 != '\0')) &&
     (cVar1 = fn_82A3F208(param_1,((ulonglong)*(byte *)(param_1 + 0x2eb5) + 0x20) * 8,
                                param_1 + 0xa18,10,param_1 + 0x18,param_1 + 0xe3c), cVar1 != '\0'))
  {
    cVar1 = fn_82A3EB70(param_1,0xf9,param_1 + 0x2db4,param_1 + 0xcb8);
    if (cVar1 != '\0') {
      cVar1 = fn_82A3F208(param_1,0xf9,param_1 + 0xcb8,8,param_1 + 0x818,param_1 + 0x233c);
      return cVar1 != '\0';
    }
  }
  return false;
}

