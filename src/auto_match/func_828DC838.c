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
extern unsigned int lbl_82024D24;


undefined4 * fn_828DC838(int param_1,int param_2,undefined4 *param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  if (param_1 != param_2) {
    iVar4 = param_1 + 8;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = &lbl_82024D24;
        puVar2 = (undefined2 *)(iVar4 + -2);
        param_3[1] = *(undefined4 *)(iVar4 + -4);
        puVar1 = (undefined2 *)((int)param_3 + 6);
        lVar5 = 0x15;
        do {
          puVar2 = puVar2 + 1;
          puVar1 = puVar1 + 1;
          *puVar1 = *puVar2;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      param_3 = param_3 + 0xd;
      iVar3 = iVar4 + 0x2c;
      iVar4 = iVar4 + 0x34;
    } while (iVar3 != param_2);
  }
  return param_3;
}

