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
extern unsigned int *auStack_40;
extern int fn_8227F950();
extern int fn_8227FC90();
extern int fn_82356F98();
extern int fn_82520158();
extern int fn_8265C9E0();
extern unsigned int lbl_821A8D8C;


undefined4 * fn_822A2E90(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_40 [64];
  
  *param_3 = 1;
  iVar1 = *param_2;
  if ((((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 4)) ||
     (((iVar1 == 5 || (iVar1 == 6)) || (iVar1 == 7)))) {
    *param_3 = 0;
    fn_82520158(0xffffffff821abfa8,auStack_40,0);
    uVar2 = *(undefined4 *)(param_2[*param_2 * 4 + 0x89] + param_2[0xa9] * 8);
    puVar3 = (undefined4 *)fn_8265C9E0(0x140);
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = 1;
      puVar3[2] = 1;
      *puVar3 = &lbl_821A8D8C;
      if (puVar3 + 4 != (undefined4 *)0x0) {
        fn_8227F950(puVar3 + 4,auStack_40,uVar2,param_2[1]);
      }
      goto LAB_822a2fcc;
    }
  }
  else {
    if (iVar1 != 1) {
      *param_3 = 0;
      fn_82356F98(param_1);
      return param_1;
    }
    *param_3 = 1;
    fn_82520158(0xffffffff821abfc4,auStack_40,0);
    puVar3 = (undefined4 *)fn_8265C9E0(0x140);
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = 1;
      puVar3[2] = 1;
      *puVar3 = &lbl_821A8D8C;
      if (puVar3 + 4 != (undefined4 *)0x0) {
        fn_8227FC90(puVar3 + 4,auStack_40,param_2 + 7);
      }
      goto LAB_822a2fcc;
    }
  }
  puVar3 = (undefined4 *)0x0;
LAB_822a2fcc:
  param_1[1] = puVar3;
  *param_1 = puVar3 + 4;
  return param_1;
}

