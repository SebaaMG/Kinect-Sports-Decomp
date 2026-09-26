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


byte fn_82F45068(int *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(*param_1 + 0x10);
  if ((((iVar2 != 0x56555949) && (iVar2 != 0x30323449)) && (iVar2 != 0x32315659)) &&
     (iVar2 != 0x31313450)) {
    return 3;
  }
  iVar3 = param_1[1];
  iVar4 = *(int *)(iVar3 + 0x10);
  if (((((iVar4 == 0x56555949) || (iVar4 == 0x30323449)) ||
       ((iVar4 == 0x32315659 || ((iVar4 == 0x32595559 || (iVar4 == 0x59565955)))))) ||
      (iVar4 == 0x55595659)) ||
     ((((iVar4 == 0x41595556 || (iVar4 == 0x3131564e)) || (iVar4 == 0x3231564e)) ||
      ((iVar4 == 0x56323136 || (iVar4 == 0x56343130)))))) {
code_r0x82f45170:
    if ((iVar4 != 0) && (iVar4 != 3)) goto code_r0x82f451a4;
  }
  else if (iVar4 != 0) {
    if (iVar4 != 3) {
      return 4;
    }
    goto code_r0x82f45170;
  }
  sVar1 = *(short *)(iVar3 + 0xe);
  if ((sVar1 != 8) && (((sVar1 != 0x10 && (sVar1 != 0x18)) && (sVar1 != 0x20)))) {
    return 4;
  }
code_r0x82f451a4:
  if ((((iVar2 == 0x56555949) || (iVar2 == 0x30323449)) || (iVar2 == 0x32315659)) &&
     ((iVar4 == 3 && (*(short *)(iVar3 + 0xe) == 8)))) {
    return 5;
  }
  if ((((iVar2 == 0x56555949) || (iVar2 == 0x30323449)) || (iVar2 == 0x32315659)) &&
     (((iVar4 == 0x56555949 || (iVar4 == 0x30323449)) || (iVar4 == 0x32315659)))) {
    return 0;
  }
  return -(iVar4 == iVar2) & 7;
}

