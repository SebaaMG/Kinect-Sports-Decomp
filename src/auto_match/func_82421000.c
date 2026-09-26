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
extern unsigned int fStack_44;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82250A18();
extern int fn_822CD140();
extern int fn_8236D0D0();
extern int fn_824180B0();
extern int fn_8241CE30();
extern int fn_82421510();
extern int fn_82539560();
extern unsigned int lbl_832975B0;
extern unsigned int stack0x00000020;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_82421000(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  int in_r0;
  int iVar2;
  double dVar3;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_60 [28];
  float fStack_44;
  
  uStack_70 = 0;
  uStack_6c = 0;
  iVar2 = **(int **)(param_2 + 0xc);
  puVar1 = (undefined4 *)((uint)(&stack0x00000020 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  uStack_68 = 0;
  dVar3 = (double)fn_82539560(param_1,(double)*(float *)(iVar2 + 0x83c),
                               (double)*(float *)(iVar2 + 0x840),(double)*(float *)(iVar2 + 0x844),
                               (double)*(float *)(iVar2 + 0x848));
  fn_82230110(auStack_60,0xffffffff821b8218);
  fStack_44 = (float)dVar3;
  fn_8236D0D0(&uStack_70,auStack_60);
  fn_82230300(auStack_60,1,0);
  fn_824180B0(*(uint **)(param_2 + 0xc),(ulonglong)**(uint **)(param_2 + 0xc) + 0x14a0,
                    &stack0x00000020,&uStack_70);
  fn_82421510(param_1,param_2);
  iVar2 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar2 = fn_82250A18();
  }
  if (*(char *)(iVar2 + 4) != '\0') {
    fn_8241CE30(param_1,*(undefined4 *)(param_2 + 0xc),param_2,6);
  }
  fn_822CD140(&uStack_70);
  return;
}

