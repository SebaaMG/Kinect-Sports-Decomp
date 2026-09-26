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
extern int fn_82366908();
extern int fn_8242F318();
extern int fn_8265C9E0();
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821B90F0;


undefined4 * fn_8242DE78(undefined4 *param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = *(int *)(param_2 + 0x174);
  puVar3 = (undefined4 *)fn_8265C9E0(0x260);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar5 = puVar3 + 4;
    puVar3[1] = 1;
    *puVar3 = &lbl_821A8D8C;
    puVar3[2] = 1;
    if (puVar5 != (undefined4 *)0x0) {
      uVar1 = *(undefined4 *)(iVar4 + 0xa8);
      uVar2 = *(undefined4 *)(iVar4 + 0xa4);
      fn_82366908(puVar5,param_3,0xffffffff821b90dc);
      puVar3[0x94] = param_2;
      *puVar5 = &lbl_821B90F0;
      iVar4 = fn_8265C9E0(0x150);
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = fn_8242F318();
      }
      puVar3[0x95] = iVar4;
      *(undefined4 *)(iVar4 + 0x7c) = uVar2;
      *(undefined4 *)(puVar3[0x95] + 0x80) = uVar1;
    }
  }
  param_1[1] = puVar3;
  *param_1 = puVar3 + 4;
  return param_1;
}

