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
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E7C870();
extern int fn_82EF0F88();
extern int fn_82EF1830();
extern int fn_82EF19C0();
extern int fn_82EF1A70();
extern int fn_82EF1AA8();
extern int fn_82EF1CA0();
extern int fn_82EF27F0();
extern unsigned int uStack_178;
extern unsigned int uStack_180;
extern unsigned int uStack_188;
extern unsigned int uStack_18c;
extern unsigned int uStack_190;
extern unsigned int uStack_40;
extern unsigned int uStack_48;


longlong fn_82E7D348(undefined8 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uStack_190;
  uint uStack_18c;
  undefined4 uStack_188;
  int *piStack_184;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [292];
  undefined1 auStack_4c [4];
  undefined4 uStack_48;
  undefined4 uStack_40;
  
  uStack_18c = 0;
  uStack_190 = 0;
  uStack_180 = 0;
  lVar5 = 0;
  uStack_178 = 0;
  uVar4 = 0;
  uStack_188 = 0;
  piStack_184 = (int *)0x0;
  fn_82EF19C0(auStack_170);
  iVar2 = fn_82E7C870(param_1,&piStack_184);
  piVar1 = piStack_184;
  if (-1 < iVar2) {
    lVar5 = fn_82EF1CA0(piStack_184,&uStack_18c);
    if (-1 < lVar5) {
      lVar5 = fn_82EF1A70(auStack_4c,uStack_18c);
      if (-1 < lVar5) {
        uVar3 = 0;
        if (uStack_18c != 0) {
          do {
            uStack_190 = 0;
            lVar5 = fn_82EF27F0(piVar1,uVar3,&uStack_180,&uStack_178,&uStack_188,0,&uStack_190
                                     );
            if (lVar5 < 0) goto LAB_82e7d51c;
            if ((uVar4 & 0xffffffff) != 0) {
              fn_82E4FE40(uVar4);
            }
            lVar5 = ((ulonglong)uStack_190 & 0x7fffffff) << 1;
            if (0x7fffffff < uStack_190) {
              lVar5 = -1;
            }
            uVar4 = fn_82E50BE8(lVar5,0,0,0,0);
            if (uVar4 == 0) {
              lVar5 = -0x7ff8fff2;
              goto LAB_82e7d51c;
            }
            lVar5 = fn_82EF27F0(piVar1,uVar3,&uStack_180,&uStack_178,&uStack_188,uVar4,
                                      &uStack_190);
            if (lVar5 < 0) goto LAB_82e7d51c;
            lVar5 = fn_82EF1A70(auStack_4c,uStack_190 << 1);
            if (lVar5 < 0) goto LAB_82e7d51c;
            lVar5 = fn_82EF0F88(auStack_4c,uVar4,uStack_190 << 1);
            if (lVar5 < 0) goto LAB_82e7d51c;
            lVar5 = fn_82EF1AA8(auStack_4c,uStack_178);
            if (lVar5 < 0) goto LAB_82e7d51c;
            lVar5 = fn_82EF1AA8(auStack_4c,uStack_188);
            if (lVar5 < 0) goto LAB_82e7d51c;
            lVar5 = fn_82EF1AA8(auStack_4c,uStack_180);
            if (lVar5 < 0) goto LAB_82e7d51c;
            uVar3 = uVar3 + 1;
          } while ((uVar3 & 0xffffffff) < (ulonglong)uStack_18c);
        }
        lVar5 = (**(code **)(*param_2 + 0x68))(param_2,0xffffffff8214c140,uStack_48,uStack_40);
      }
    }
  }
LAB_82e7d51c:
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if ((uVar4 & 0xffffffff) != 0) {
    fn_82E4FE40(uVar4);
  }
  fn_82EF1830(auStack_170);
  return lVar5;
}

