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
#define _uStack00000040 ((*(U64*)&uStack00000040))
extern int fn_8305A5E8();
extern int fn_8305A6A0();
extern int fn_8305A7A8();
extern int fn_8305A9D0();
extern int fn_8305B970();
extern int fn_8305B9A0();
extern int fn_8305BB28();
extern int fn_8305BE58();
extern unsigned int lbl_8207F700;
extern unsigned int lbl_8217E370;
extern unsigned int uStack00000020;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;


void fn_8305AC60(int *param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uStack00000020;
  double dStack00000028;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined4 uStack00000040;
  
  dVar5 = param_3 - lbl_8207F700;
  if (param_3 - lbl_8207F700 < lbl_8217E370) {
    dVar5 = lbl_8217E370;
  }
  uStack00000020 = param_2;
  dStack00000028 = param_3;
  uStack00000030 = param_4;
  uStack00000038 = param_5;
  _uStack00000040 = param_6;
  fn_8305A5E8(param_2,dVar5,*param_1);
  fn_8305A5E8(param_2,dVar5,*param_1);
  fn_8305B9A0(dVar5,uStack00000030,(ulonglong)*(uint *)(*param_1 + 8) + 0x142c,600);
  puVar1 = (uint *)*param_1;
  iVar3 = fn_8305B970((double)*puVar1,puVar1 + 3);
  dVar5 = (double)fn_8305BE58((double)(longlong)iVar3);
  uVar2 = uStack00000040;
  iVar3 = *param_1;
  *(float *)(puVar1[2] + 0x34) = (float)dVar5;
  uVar6 = uStack00000038;
  fn_8305A6A0(uStack00000038,iVar3);
  fn_8305A7A8(uVar6,*param_1,uVar2);
  puVar1 = (uint *)*param_1;
  iVar4 = fn_8305BB28((double)*puVar1,puVar1 + 3);
  iVar3 = *param_1;
  *(float *)(puVar1[2] + 0x2c) = (float)(longlong)(iVar4 + 1);
  fn_8305A9D0(iVar3);
  return;
}

