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
extern int fn_82A1DDC0();
extern int fn_82C53960();
extern int fn_82C53970();
extern int fn_82CD4788();
extern int fn_82CD4888();
extern int fn_82CD4988();
extern int fn_82CD58C0();
extern int fn_82F68CC0();


void fn_82CD5A90(int *param_1,int param_2,int param_3,int *param_4,int param_5)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_1 != (int *)0x0) {
    if (((param_4 == (int *)0x0) || (param_2 == 0)) || (param_3 == 0)) {
      *param_1 = 1;
    }
    else {
      *param_4 = 0;
      uVar1 = fn_82C53960(0x428,0);
      *param_4 = (int)uVar1;
      if ((uVar1 & 0xffffffff) == 0) {
        *param_1 = 2;
      }
      else {
        if ((*(int *)(param_2 + 0x10) == 0) && (*(short *)(param_2 + 0xe) == 8)) {
          fn_82A1DDC0(uVar1,param_2,0x428);
        }
        else {
          uVar3 = 0x34;
          if (*(int *)(param_2 + 0x10) != 3) {
            uVar3 = 0x28;
          }
          fn_82F68CC0(uVar1,param_2,uVar3);
        }
        param_4[1] = 0;
        uVar1 = fn_82C53960(0x428,0);
        param_4[1] = (int)uVar1;
        if ((uVar1 & 0xffffffff) == 0) {
          *param_1 = 2;
          if (*param_4 != 0) {
            fn_82C53970();
            *param_4 = 0;
          }
        }
        else {
          if ((*(int *)(param_3 + 0x10) == 0) && (*(short *)(param_3 + 0xe) == 8)) {
            fn_82A1DDC0(uVar1,param_3,0x428);
          }
          else {
            uVar3 = 0x34;
            if (*(int *)(param_3 + 0x10) != 3) {
              uVar3 = 0x28;
            }
            fn_82F68CC0(uVar1,param_3,uVar3);
          }
          param_4[0xe47] = param_5;
          param_4[0xe36] = 0;
          *param_1 = 0;
          param_4[0xe3d] = 0;
          param_4[0xe21] = 0;
          iVar2 = fn_82CD4988(param_4);
          *param_1 = iVar2;
          if (iVar2 == 0) {
            iVar2 = fn_82CD4888(param_4);
            *param_1 = iVar2;
            if (iVar2 == 0) {
              iVar2 = fn_82CD58C0(param_4);
              *param_1 = iVar2;
              if (iVar2 == 0) {
                fn_82CD4788(param_4);
              }
            }
          }
        }
      }
    }
  }
  return;
}

