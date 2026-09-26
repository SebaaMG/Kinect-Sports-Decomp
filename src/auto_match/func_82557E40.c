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
extern unsigned int *auStack_620;
extern int fn_82522ED8();
extern int fn_82529508();
extern int fn_82529A38();
extern int fn_82587AC0();
extern int fn_825B6CE0();
extern unsigned int lbl_821CA460;


void fn_82557E40(undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar4;
  undefined8 uVar3;
  int iVar5;
  undefined1 auStack_620 [1568];
  
  iVar4 = fn_825B6CE0(param_1 + 5);
  uVar2 = lbl_821CA460;
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82529508(auStack_620);
  }
  *(undefined4 *)(iVar4 + 0x5c0) = param_1[6];
  *(undefined4 *)(iVar4 + 0x5c4) = param_1[7];
  *(undefined4 *)(iVar4 + 0x5c8) = param_1[8];
  *(undefined4 *)(iVar4 + 0x5cc) = param_1[9];
  *(undefined4 *)(iVar4 + 0x5d0) = param_1[10];
  uVar1 = *param_1;
  *(undefined4 *)(iVar4 + 0xb0) = uVar2;
  *(undefined4 *)(iVar4 + 0x84) = uVar1;
  if (*param_2 != 0) {
    *(int *)(iVar4 + 0xd4) = *param_2;
  }
  if (param_3 != (int *)0x0) {
    if (((*param_3 != 0) && (*(int *)(iVar4 + 0xdc) = *param_3, param_4 != (int *)0x0)) &&
       (*param_4 != 0)) {
      *(int *)(iVar4 + 0xe0) = *param_4;
    }
  }
  uVar3 = fn_82587AC0(iVar4 + 0x4b);
  iVar5 = fn_82529A38(uVar3,iVar4,0);
  param_1[1] = iVar5;
  *(undefined4 *)(iVar5 + 0xb50) = 1;
  if (iVar4 != 0) {
    fn_82522ED8(iVar4);
  }
  return;
}

