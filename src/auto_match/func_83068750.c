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
extern unsigned int *auStack_90;
extern unsigned int *auStack_e0;
extern int fn_8305D7C8();
extern int fn_8305E0F8();
extern int fn_8305EC98();
extern int fn_8305F258();
extern int fn_8305F2E8();
extern int fn_8305F320();
extern int fn_83066810();
extern int fn_83068418();


void fn_83068750(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,code *param_6,undefined8 param_7)

{
  int iVar2;
  char cVar3;
  undefined8 uVar1;
  int iVar4;
  undefined1 auStack_e0 [80];
  undefined1 auStack_90 [144];
  
  do {
    while( true ) {
      iVar4 = param_2;
      cVar3 = fn_83068418(iVar4);
      if (cVar3 != '\0') goto LAB_830687e4;
      iVar2 = fn_83066810(param_1,iVar4 + 0x10,param_3);
      if (iVar2 == 2) break;
      if (iVar2 != 1) {
        if (iVar2 != 3) {
          return;
        }
        fn_8305F2E8(auStack_e0);
        fn_8305F2E8(auStack_90);
        uVar1 = fn_8305D7C8(param_3);
        fn_8305E0F8(auStack_e0,uVar1);
        uVar1 = fn_8305D7C8(param_3);
        fn_8305E0F8(auStack_90,uVar1);
        fn_8305EC98(auStack_e0,param_3);
        fn_8305EC98(auStack_90,param_3);
        fn_8305F320(param_1,param_3,iVar4 + 0x10,auStack_e0,auStack_90);
        if (*(int *)(iVar4 + 0x34) == 0) {
          if (param_6 != (code *)0x0) {
            (*param_6)(iVar4,auStack_e0,param_7);
          }
        }
        else {
          ((int (*)())fn_83068750)(param_1,*(int *)(iVar4 + 0x34),auStack_e0);
        }
        ((int (*)())fn_83068750)(param_1,*(undefined4 *)(iVar4 + 0x30),auStack_90);
        fn_8305F258(auStack_90);
        fn_8305F258(auStack_e0);
        return;
      }
      param_2 = *(int *)(iVar4 + 0x30);
    }
    param_2 = *(int *)(iVar4 + 0x34);
  } while (*(int *)(iVar4 + 0x34) != 0);
  param_5 = param_6;
  if (param_6 != (code *)0x0) {
LAB_830687e4:
    (*param_5)(iVar4,param_3,param_7);
  }
  return;
}

