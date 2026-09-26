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
extern unsigned int *auStack_20;
extern int fn_82828828();


undefined4 * fn_82834820(undefined4 *param_1,int param_2,int param_3,char param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined1 auStack_20 [16];
  
  puVar3 = *(undefined4 **)(param_2 + 4);
  uVar4 = 1;
  if (*(char *)((int)puVar3[1] + 0x11) == '\0') {
    uVar1 = *(uint *)(*(int *)(param_3 + 0xc) + 0x20);
    puVar2 = (undefined4 *)puVar3[1];
    do {
      puVar3 = puVar2;
      if (param_4 == '\0') {
        uVar4 = -(ulonglong)(uVar1 < *(uint *)(puVar3[3] + 0x20)) & 1;
      }
      else {
        uVar4 = -((ulonglong)(*(uint *)(puVar3[3] + 0x20) < uVar1) - 1);
      }
      if ((uVar4 & 0xff) == 0) {
        puVar2 = (undefined4 *)puVar3[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar3;
      }
    } while (*(char *)((int)puVar2 + 0x11) == '\0');
  }
  puVar3 = (undefined4 *)fn_82828828(auStack_20,param_2,uVar4,puVar3,param_3);
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = *puVar3;
  return param_1;
}

