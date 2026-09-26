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
extern int fn_823BEEA0();
extern int fn_824CD030();
extern int fn_828B2DE8();
extern int fn_82F51178();
extern int fn_82F513F8();
extern int fn_82F53B80();


void fn_824D29F0(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar4;
  int iVar5;
  undefined8 uVar3;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar4 = fn_824CD030(param_1 + -0xf0);
  if ((iVar4 == 0) &&
     (iVar4 = *(int *)(param_1 + 0x70), iVar5 = fn_82F513F8(*(undefined4 *)(param_1 + -0xd0)),
     iVar5 != iVar4)) {
    fn_82F51178(*(undefined4 *)(param_1 + -0xd0),*(undefined4 *)(param_1 + 0x70));
  }
  iVar4 = *(int *)(param_1 + 0x74);
  *(int *)(param_1 + 0x74) = iVar4 + 1;
  uVar3 = fn_828B2DE8(*(undefined4 *)(param_1 + 0x70));
  fn_823BEEA0(param_2,uVar3,iVar4);
  fn_82F53B80(*(undefined4 *)(param_1 + 0x70));
  puVar1 = (undefined4 *)(param_2 + 0x180U & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar2 = (undefined4 *)(param_1 + 0x50U & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 400);
  return;
}

