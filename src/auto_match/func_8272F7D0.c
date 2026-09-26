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
extern int fn_82681930();
extern int fn_8268ACE8();
extern int fn_82696330();
extern int fn_8269AB28();
extern int fn_826B44A0();
extern int fn_82722C50();
extern int fn_8272C1E0();
extern int fn_8272DDC8();
extern int fn_8279FB38();


void fn_8272F7D0(int *param_1)

{
  int iVar2;
  ulonglong uVar1;
  char cVar3;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [96];
  
  iVar2 = fn_8268ACE8((ulonglong)(uint)param_1[0x27] + 0x48);
  if (iVar2 == 0) {
    (**(code **)(*param_1 + 0x1ac))
              (param_1,0xffffffff82196582,*(ushort *)(param_1 + 0x32) >> 1 & 1,0);
  }
  else {
    cVar3 = '\0';
    if (*(int *)(param_1[0x2d] + 0x10) != 0) {
      uVar1 = (**(code **)(*param_1 + 0x5c))(param_1);
      if ((uVar1 & 0xffffffff) != 0) {
        auStack_70[0] = 0;
        cVar3 = fn_826B44A0(uVar1,param_1 + 0x2d,auStack_70,0,0,0,0);
        fn_82696330(auStack_70);
      }
    }
    if (cVar3 == '\0') {
      (**(code **)(*param_1 + 0x1ac))
                (param_1,((ulonglong)*(uint *)(param_1[0x27] + 0x48) & 0xfffffffc) + 8,
                 *(ushort *)(param_1 + 0x32) >> 1 & 1,1);
      fn_82722C50(param_1);
    }
  }
  fn_8272C1E0(param_1);
  fn_8279FB38(param_1[0x28]);
  fn_8269AB28(param_1);
  if (param_1[0x21] == 0) {
    fn_82681930(auStack_60);
    fn_8272DDC8(param_1,auStack_60,1);
  }
  return;
}

