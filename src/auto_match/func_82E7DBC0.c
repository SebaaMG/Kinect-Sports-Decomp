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
extern unsigned int *auStack_170;
extern unsigned int *auStack_4c;
extern int fn_82E7BF78();
extern int fn_82E7C920();
extern int fn_82EF0F88();
extern int fn_82EF1830();
extern int fn_82EF19C0();
extern int fn_82EF1A70();
extern int fn_82EF2C18();
extern int fn_82EF3718();
extern unsigned int uStack_174;
extern unsigned int uStack_17c;
extern unsigned int uStack_180;
extern unsigned int uStack_184;
extern unsigned int uStack_188;
extern unsigned int uStack_18c;
extern unsigned int uStack_18e;
extern unsigned int uStack_190;
extern unsigned int uStack_40;
extern unsigned int uStack_48;


longlong fn_82E7DBC0(undefined8 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined2 uStack_190;
  undefined2 uStack_18e;
  uint uStack_18c;
  uint uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  uint uStack_17c;
  int *piStack_178;
  undefined4 uStack_174;
  undefined1 auStack_170 [292];
  undefined1 auStack_4c [4];
  undefined4 uStack_48;
  undefined4 uStack_40;
  
  uVar5 = 0;
  uStack_18c = 0;
  uStack_18e = 0;
  uStack_180 = 0;
  lVar6 = 0;
  uStack_184 = 0;
  uStack_174 = 0;
  uStack_190 = 0;
  piStack_178 = (int *)0x0;
  uStack_17c = 0;
  uStack_188 = 0;
  fn_82EF19C0(auStack_170);
  iVar2 = fn_82E7C920(param_1,&piStack_178);
  piVar1 = piStack_178;
  if (-1 < iVar2) {
    lVar6 = fn_82EF2C18(piStack_178,&uStack_18c);
    if (-1 < lVar6) {
      lVar6 = fn_82EF1A70(auStack_4c,uStack_18c);
      if (-1 < lVar6) {
        if (uStack_18c != 0) {
          do {
            lVar6 = fn_82EF3718(piVar1,uVar5,&uStack_18e,&uStack_180,&uStack_184,&uStack_174,
                                      &uStack_190);
            if (lVar6 < 0) goto LAB_82e7dd94;
            lVar6 = fn_82E7BF78(uStack_180,0x104,&uStack_17c);
            if (lVar6 < 0) goto LAB_82e7dd94;
            lVar4 = (ulonglong)uStack_17c + 2;
            uStack_17c = (uint)lVar4;
            lVar6 = fn_82E7BF78(uStack_184,0x104,&uStack_188);
            if (lVar6 < 0) goto LAB_82e7dd94;
            lVar3 = (ulonglong)uStack_188 + 2;
            uStack_188 = (uint)lVar3;
            lVar6 = fn_82EF1A70(auStack_4c,uStack_18e);
            if (lVar6 < 0) goto LAB_82e7dd94;
            lVar6 = fn_82EF1A70(auStack_4c,lVar4);
            if (lVar6 < 0) goto LAB_82e7dd94;
            lVar6 = fn_82EF0F88(auStack_4c,uStack_180,lVar4);
            if (lVar6 < 0) goto LAB_82e7dd94;
            lVar6 = fn_82EF1A70(auStack_4c,lVar3);
            if (lVar6 < 0) goto LAB_82e7dd94;
            lVar6 = fn_82EF0F88(auStack_4c,uStack_184,lVar3);
            if (lVar6 < 0) goto LAB_82e7dd94;
            lVar6 = fn_82EF1A70(auStack_4c,uStack_190);
            if (lVar6 < 0) goto LAB_82e7dd94;
            lVar6 = fn_82EF0F88(auStack_4c,uStack_174,uStack_190);
            if (lVar6 < 0) goto LAB_82e7dd94;
            uVar5 = uVar5 + 1;
          } while ((uVar5 & 0xffffffff) < (ulonglong)uStack_18c);
        }
        lVar6 = (**(code **)(*param_2 + 0x68))(param_2,0xffffffff8214c160,uStack_48,uStack_40);
      }
    }
  }
LAB_82e7dd94:
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  fn_82EF1830(auStack_170);
  return lVar6;
}

