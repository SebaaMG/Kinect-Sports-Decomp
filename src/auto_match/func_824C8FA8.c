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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern int fn_824C9298();
extern int fn_82529D38();
extern int fn_8253FD80();
extern int fn_8255A160();
extern int fn_8255ACE0();
extern unsigned int lbl_821917C0;
extern unsigned int lbl_821959A4;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_38;


undefined8 fn_824C8FA8(undefined8 param_1,undefined4 *param_2,int param_3)

{
  float fVar1;
  undefined4 *puVar2;
  int in_r0;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  
  fn_82529D38(*param_2,&fStack_40);
  fn_8255A160((double)fStack_3c,(double)lbl_821917C0);
  dVar3 = (double)fn_824C9298(param_2);
  dVar4 = (double)fn_824C9298();
  fVar1 = (float)(dVar3 - dVar4);
  dVar3 = (double)fn_8253FD80((double)(fVar1 / SQRT(fVar1 * fVar1 + lbl_821959A4)));
  fStack_40 = (float)-dVar3;
  uStack_38 = lbl_821CC160;
  puVar2 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
  uVar5 = *puVar2;
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  fStack_3c = (float)lbl_821CC160;
  fn_8255ACE0(&fStack_40);
  puVar2 = (undefined4 *)(in_r0 + (int)param_1 & 0xfffffff0);
  *puVar2 = uVar5;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  return param_1;
}

