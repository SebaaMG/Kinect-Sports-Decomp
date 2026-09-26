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
extern int fn_8269D300();
extern int fn_826A7720();
extern unsigned int uStack_33;
extern unsigned int uStack_34;
extern unsigned int uStack_35;
extern unsigned int uStack_36;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_43;
extern unsigned int uStack_44;
extern unsigned int uStack_45;
extern unsigned int uStack_46;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_53;
extern unsigned int uStack_54;
extern unsigned int uStack_55;
extern unsigned int uStack_56;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


ulonglong fn_826CC9E8(int *param_1,int *param_2,uint *param_3)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  char cVar5;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined2 uStack_58;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined2 uStack_48;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined2 uStack_38;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined1 uStack_34;
  undefined1 uStack_33;
  
  if (*param_2 == 0x40) {
    uVar3 = (**(code **)(*param_1 + 0x6c))();
    if (((*param_3 & 1) == 0) && (iVar4 = fn_826A7720(param_2), iVar4 != 0)) {
      uStack_58 = (undefined2)iVar4;
      uStack_5c = 0;
      uStack_56 = 0;
      uStack_60 = 0x20000;
      uStack_55 = 0;
      uStack_54 = 0;
      uStack_53 = 0;
      uVar3 = (**(code **)(*param_1 + 0x6c))(param_1,&uStack_60);
      if ((uVar3 & 0xff) != 0) {
        *param_3 = *param_3 | 1;
      }
    }
    iVar4 = (**(code **)(*param_1 + 0x40))(param_1);
    cVar5 = fn_8269D300(iVar4,param_1);
    if ((cVar5 == '\0') || (bVar1 = true, (*(ushort *)(iVar4 + 0xb00) & 1) == 0)) {
      bVar1 = false;
    }
    if (((bVar1) && ((*(short *)(param_2 + 2) == 0xd || (*(short *)(param_2 + 2) == 0x20)))) &&
       ((cVar5 = (**(code **)(*param_1 + 0xb8))(param_1), cVar5 != '\0' ||
        ((uVar2 = *(uint *)(iVar4 + 0xb00) >> 0x1a & 3, uVar2 != 3 && (uVar2 == 1)))))) {
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_50 = 0x400;
      uStack_46 = 0;
      uStack_45 = 0xff;
      uStack_44 = 0;
      uStack_43 = 0;
      (**(code **)(*param_1 + 0x6c))(param_1,&uStack_50);
      uStack_3c = 0;
      uStack_40 = 0x800;
      uStack_38 = 0;
      uStack_36 = 0;
      uStack_35 = 0xff;
      uStack_34 = 0;
      uStack_33 = 0;
      (**(code **)(*param_1 + 0x6c))(param_1,&uStack_40);
    }
  }
  else {
    uVar3 = (**(code **)(*param_1 + 0x6c))();
  }
  return uVar3;
}

