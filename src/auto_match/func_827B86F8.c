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
extern int fn_8267BED0();


void fn_827B86F8(undefined4 *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 auStack_20 [2];
  
  puVar3 = (undefined4 *)param_1[3];
  if (puVar3 == (undefined4 *)0x0) {
    uVar2 = param_1[2];
    if (uVar2 < 0x7f) {
      iVar4 = uVar2 + 1;
      puVar3 = (undefined4 *)(uVar2 * 0x24 + param_1[1]);
    }
    else {
      auStack_20[0] = 0xc3;
      puVar3 = (undefined4 *)fn_8267BED0(param_1[4],0x11e0,auStack_20);
      puVar3[0x477] = 0;
      if (param_1[1] == 0) {
        *param_1 = puVar3;
      }
      else {
        *(undefined4 **)(param_1[1] + 0x11dc) = puVar3;
      }
      iVar4 = 1;
      param_1[1] = puVar3;
    }
    param_1[2] = iVar4;
  }
  else {
    param_1[3] = *puVar3;
  }
  *puVar3 = *param_2;
  puVar3[1] = param_2[1];
  puVar3[2] = param_2[2];
  puVar3[3] = param_2[3];
  puVar3[4] = param_2[4];
  puVar3[5] = param_2[5];
  *(undefined2 *)(puVar3 + 6) = *(undefined2 *)(param_2 + 6);
  *(undefined2 *)((int)puVar3 + 0x1a) = *(undefined2 *)((int)param_2 + 0x1a);
  *(undefined2 *)(puVar3 + 7) = *(undefined2 *)(param_2 + 7);
  *(undefined2 *)((int)puVar3 + 0x1e) = *(undefined2 *)((int)param_2 + 0x1e);
  uVar1 = *(undefined2 *)((int)param_2 + 0x22);
  *(undefined2 *)(puVar3 + 8) = *(undefined2 *)(param_2 + 8);
  *(undefined2 *)((int)puVar3 + 0x22) = uVar1;
  return;
}

