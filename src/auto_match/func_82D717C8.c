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
extern int fn_82CFF8D0();


void fn_82D717C8(int *param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  if ((param_1[3] & 0x80000000U) == 0) {
    uVar1 = fn_82CFF8D0(param_1[1],param_1[3] << 2);
    (**(code **)(*param_2 + 0x14))(param_2,3,0xffffffff82139c0c,param_1[1],param_1[2] << 2,uVar1);
  }
  iVar3 = 0;
  if (0 < param_1[2]) {
    iVar2 = 0;
    do {
      iVar3 = iVar3 + 1;
      puVar5 = *(undefined1 **)(iVar2 + param_1[1]);
      iVar2 = iVar2 + 4;
      if (iVar3 == param_1[2]) {
        puVar4 = puVar5 + *param_1;
      }
      else {
        puVar4 = puVar5 + 0x200;
      }
      for (; puVar5 < puVar4; puVar5 = puVar5 + (byte)puVar5[3]) {
        switch(*puVar5) {
        case 2:
        case 4:
        case 6:
        case 10:
        case 0xc:
        case 0xe:
          (**(code **)(*param_2 + 0xc))(param_2,0xffffffff82139bf8,*(undefined4 *)(puVar5 + 8),0);
        }
      }
    } while (iVar3 < param_1[2]);
  }
  return;
}

