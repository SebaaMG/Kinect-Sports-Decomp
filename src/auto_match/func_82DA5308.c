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
extern unsigned int *auStack_c0;
extern int fn_82CE5410();
extern int fn_82D80C18();
extern int fn_82D80C30();
extern int fn_82D9C790();
extern int fn_82DA4100();
extern int fn_82DA4850();
extern unsigned int iStack_5c;
extern unsigned int uStack_68;
extern unsigned int uStack_70;


void fn_82DA5308(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_c0 [80];
  undefined8 uStack_70;
  undefined8 uStack_68;
  int iStack_5c;
  
  fn_82D9C790(auStack_c0,*(undefined4 *)(param_4 + 0x78));
  uStack_70 = *param_5;
  uStack_68 = param_5[1];
  *(int *)(param_4 + 0x94) = *(int *)(param_4 + 0x94) + 1;
  fn_82DA4850(param_2,param_3,param_4);
  fn_82DA4100(param_1,param_2,param_3,auStack_c0,0xffffffff82da3ef8,param_6);
  lVar2 = (ulonglong)*(uint *)(param_4 + 0x94) - 1;
  *(int *)(param_4 + 0x94) = (int)lVar2;
  if ((lVar2 == 0) && (*(char *)(param_4 + 0x9c) == '\0')) {
    if (*(int *)(param_4 + 0x8c) != 0) {
      fn_82D80C18(param_4);
    }
    if ((*(int *)(param_4 + 0xa4) == 1) && (*(int *)(param_4 + 0x90) != 0)) {
      fn_82D80C30(param_4);
    }
  }
  if (iStack_5c != 0) {
    iVar1 = fn_82CE5410();
    (**(code **)(**(int **)(iVar1 + 0x10) + 8))(*(int **)(iVar1 + 0x10),iStack_5c,0x200);
  }
  return;
}

