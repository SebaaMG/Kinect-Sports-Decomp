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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_48;
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a1;
extern unsigned int *auStack_b4;
extern unsigned int *auStack_b8;
extern unsigned int *auStack_bc;
extern unsigned int *auStack_c0;
extern int fn_822315A0();
extern int fn_828C01A0();
extern int fn_828CCCC0();
extern int fn_828E0268();
extern int fn_828E2A80();
extern int fn_828E3078();
extern int fn_828E3380();
extern int fn_828E3958();
extern int fn_828E3BA0();
extern int fn_828E51D0();
extern int fn_828E5338();
extern unsigned int iStack_78;
extern unsigned int iStack_ac;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;


int * fn_828E53D8(int param_1,undefined8 param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_c0 [4];
  undefined1 auStack_bc [4];
  undefined1 auStack_b8 [4];
  undefined1 auStack_b4 [4];
  code *pcStack_b0;
  int iStack_ac;
  undefined1 auStack_a1 [17];
  int *piStack_90;
  undefined1 auStack_80 [8];
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [72];
  
  uVar1 = *(uint *)(param_1 + 0x10);
  fn_828E0268(auStack_bc);
  piVar2 = (int *)fn_828E3380(auStack_b4,(ulonglong)uVar1 + 8,auStack_bc);
  pcStack_b0 = (code *)0x0;
  iStack_ac = 0;
  fn_828CCCC0(&pcStack_b0,*(undefined4 *)(*piVar2 + 0x14),*(undefined4 *)(*piVar2 + 0x18),0);
  piVar2 = (int *)(*(code *)**(undefined4 **)(pcStack_b0 + 0x28))(pcStack_b0 + 0x28);
  if (iStack_ac != 0) {
    fn_822315A0(iStack_ac);
  }
  iStack_ac = 0;
  pcStack_b0 = fn_828E3BA0;
  iStack_78 = param_1;
  fn_828E3078(auStack_a1 + 1,0x828e3ba000000000,CONCAT44(param_1,uStack_74),
                  CONCAT44(uStack_70,uStack_6c),auStack_c0);
  uStack_70 = 0;
  fn_828C01A0(auStack_60,auStack_a1 + 1);
  fn_828C01A0(auStack_48,auStack_80);
  (**(code **)(*piVar2 + 4))(piVar2,auStack_60);
  fn_828E2A80(auStack_60);
  if (piStack_90 != (int *)0x0) {
    (**(code **)(*piStack_90 + 0xc))
              (piStack_90,
               (int)(auStack_a1 + -(int)piStack_90 + 1) -
               (int)(auStack_a1 +
                    (uint)(auStack_a1 + -(int)piStack_90 + 1 == (undefined1 *)0x0) +
                    -(int)piStack_90));
  }
  fn_828E0268(auStack_b8,param_2);
  fn_828E3958(&pcStack_b0,param_1 + 0x18,auStack_b8,piVar2);
  iVar3 = fn_828E5338();
  fn_828E51D0(*(undefined4 *)(iVar3 + 8),param_1,piVar2);
  return piVar2;
}

