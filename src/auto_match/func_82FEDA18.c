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
extern unsigned int *auStack_30;
extern int fn_82FA5190();
extern int fn_82FB36E8();
extern int fn_82FED500();
extern int fn_82FEF800();
extern int fn_830224E8();
extern int fn_83024470();
extern int fn_830245A0();
extern int fn_830245B0();
extern int fn_83024AD8();
extern int fn_83024E30();
extern unsigned int lbl_831BC770;
extern unsigned int lbl_831BC774;


int fn_82FEDA18(ulonglong param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 auStack_30 [12];
  
  for (puVar1 = lbl_831BC774; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    if ((ulonglong)(uint)puVar1[1] == (param_1 & 0xffffffff)) {
      if (puVar1 + 2 != (int *)0x0) {
        return puVar1[2];
      }
      break;
    }
  }
  fn_82FEF800(auStack_30);
  iVar4 = fn_82FED500(param_1,auStack_30[0]);
  if (iVar4 != 0) {
    iVar5 = fn_830245B0(iVar4,param_1);
    if (iVar5 == 1) {
      fn_83024E30(iVar4);
      fn_830245A0(iVar4);
    }
    else {
      fn_83024AD8();
      puVar3 = lbl_831BC774;
      puVar1 = (undefined4 *)0x0;
      while (puVar2 = puVar3, puVar2 != (undefined4 *)0x0) {
        if (puVar2[1] == *(int *)(iVar4 + 0x16c)) {
          fn_82FB36E8(0xffffffff831bc774,puVar2,puVar1);
          break;
        }
        puVar1 = puVar2;
        puVar3 = (undefined4 *)*puVar2;
      }
      fn_83024470(iVar4);
      fn_830224E8(iVar4 + 0x80);
      fn_82FA5190(lbl_831BC770,iVar4);
      iVar4 = 0;
    }
  }
  return iVar4;
}

