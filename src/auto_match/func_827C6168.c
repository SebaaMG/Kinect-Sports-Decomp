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
extern int fn_827C6100();


undefined8 fn_827C6168(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = param_1[3];
  if (param_3 == 0) {
    *(undefined4 *)(*(int *)param_1[8] + 0x14) = 0x28;
    (*(code *)**(undefined4 **)param_1[8])();
  }
  iVar3 = iVar3 + param_3;
  uVar4 = ((1 << (param_3 & 0x3f)) - 1U & param_2) << (0x18U - iVar3 & 0x3f) | param_1[2];
  while( true ) {
    if (iVar3 < 8) {
      param_1[2] = uVar4;
      param_1[3] = iVar3;
      return 1;
    }
    *(char *)*param_1 = (char)(uVar4 >> 0x10);
    uVar1 = param_1[1];
    *param_1 = *param_1 + 1;
    param_1[1] = (int)((ulonglong)uVar1 - 1);
    if (((ulonglong)uVar1 - 1 == 0) && (cVar2 = fn_827C6100(param_1), cVar2 == '\0')) break;
    if (((int)uVar4 >> 0x10 & 0xffU) == 0xff) {
      *(undefined1 *)*param_1 = 0;
      uVar1 = param_1[1];
      *param_1 = *param_1 + 1;
      param_1[1] = (int)((ulonglong)uVar1 - 1);
      if (((ulonglong)uVar1 - 1 == 0) && (cVar2 = fn_827C6100(param_1), cVar2 == '\0')) {
        return 0;
      }
    }
    iVar3 = iVar3 + -8;
    uVar4 = uVar4 << 8;
  }
  return 0;
}

