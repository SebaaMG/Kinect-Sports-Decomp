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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern unsigned int *auStack_80;
extern int fn_822315A0();
extern int fn_8234D5A0();
extern int fn_827F0FB8();
extern int fn_827F4818();
extern unsigned int iStack_74;
extern unsigned int iStack_7c;
extern unsigned int stack0x00000000;


ulonglong fn_8234C000(int param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_80 [4];
  int iStack_7c;
  undefined1 auStack_78 [4];
  int iStack_74;
  undefined4 auStack_70 [4];
  undefined1 auStack_60 [96];
  
  if (*(int *)(param_1 + 0x118) != 0) {
    fn_827F4818(&stack0x00000000 + -0x60,0);
    puVar2 = (undefined4 *)fn_8234D5A0(&stack0x00000000 + -0x80,&stack0x00000000 + -0x60);
    uVar3 = 0;
    uVar4 = 0;
    if ((undefined4 *)(&stack0x00000000 + -0x70) != puVar2) {
      uVar4 = puVar2[1];
      puVar2[1] = 0;
      uVar3 = *puVar2;
      *puVar2 = 0;
    }
    iVar1 = *(int *)(param_1 + 300);
    *(undefined4 *)(param_1 + 300) = uVar4;
    *(undefined4 *)(param_1 + 0x128) = uVar3;
    if (iVar1 != 0) {
      fn_822315A0();
    }
    if (iStack_7c != 0) {
      fn_822315A0();
    }
    fn_827F4818(&stack0x00000000 + -0x60,0,*(undefined4 *)(param_1 + 0x128),
                 *(undefined4 *)(param_1 + 0x144));
    puVar2 = (undefined4 *)fn_8234D5A0(&stack0x00000000 + -0x78,&stack0x00000000 + -0x60);
    uVar3 = 0;
    uVar4 = 0;
    if ((undefined4 *)(&stack0x00000000 + -0x70) != puVar2) {
      uVar4 = puVar2[1];
      puVar2[1] = 0;
      uVar3 = *puVar2;
      *puVar2 = 0;
    }
    iVar1 = *(int *)(param_1 + 0x158);
    *(undefined4 *)(param_1 + 0x158) = uVar4;
    *(undefined4 *)(param_1 + 0x154) = uVar3;
    if (iVar1 != 0) {
      fn_822315A0();
    }
    if (iStack_74 != 0) {
      fn_822315A0();
    }
    fn_827F0FB8(param_2,*(undefined4 *)(param_1 + 0x118),0);
    fn_827F0FB8(param_2,*(undefined4 *)(param_1 + 0x128),0);
    fn_827F0FB8(param_2,*(undefined4 *)(param_1 + 0x144),0);
    fn_827F0FB8(param_2,*(undefined4 *)(param_1 + 0x154),1);
    param_3 = (ulonglong)*(uint *)(param_1 + 0x154);
  }
  return param_3;
}

