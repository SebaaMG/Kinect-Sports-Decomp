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
extern unsigned int *auStack_110;
extern unsigned int *auStack_120;
extern unsigned int *auStack_138;
extern unsigned int *auStack_144;
extern unsigned int *auStack_150;
extern unsigned int *auStack_160;
extern unsigned int *auStack_90;
extern unsigned int *auStack_d0;
extern int fn_8280A5D8();
extern int fn_8280CB48();
extern int fn_8280CB58();
extern int fn_8280CB70();
extern int fn_8280CD70();
extern int fn_8280CED8();
extern int fn_8280E960();
extern int fn_828102A8();
extern int fn_82810328();
extern int fn_82810B78();
extern int fn_8281E128();
extern int fn_8281E300();
extern int fn_82F68CC0();
extern unsigned int lbl_821AAD20;


void fn_827F9758(undefined8 param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,
                  ulonglong param_6,undefined8 param_7,int param_8)

{
  longlong lVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [12];
  undefined1 auStack_144 [12];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [64];
  undefined1 auStack_d0 [64];
  undefined1 auStack_90 [144];
  
  fn_8281E128(auStack_160);
  dVar3 = (double)fn_8280A5D8(param_1);
  lVar1 = (param_6 & 0xffff) * 0x40;
  fn_82F68CC0(auStack_110,(ulonglong)*(uint *)(param_2 + 0xc) + lVar1,0x40);
  fn_82F68CC0(auStack_d0,(ulonglong)*(uint *)(param_3 + 0xc) + lVar1,0x40);
  fn_8280CB70(param_4,auStack_110,auStack_110);
  fn_8280CB70(param_5,auStack_d0,auStack_d0);
  fn_8280CB58(auStack_110,auStack_150);
  fn_8280CB58(auStack_d0,auStack_144);
  dVar4 = (double)lbl_821AAD20;
  fn_8280CB48(dVar4,dVar4,dVar4,auStack_110);
  fn_8280CB48(dVar4,dVar4,dVar4,auStack_d0);
  fn_82810328(auStack_144,auStack_150,param_8);
  fn_828102A8(dVar3,param_8,param_8);
  fn_8280CED8(auStack_110,auStack_90);
  fn_8280CB70(auStack_d0,auStack_90,auStack_90);
  fn_8280CD70(auStack_90,auStack_138,auStack_138,auStack_160);
  fn_8281E300(auStack_160,auStack_120);
  iVar2 = param_8 + 0xc;
  dVar4 = (double)fn_8280E960(auStack_120,iVar2);
  fn_82810B78(iVar2,iVar2);
  *(float *)(param_8 + 0x18) = (float)(dVar4 * dVar3);
  return;
}

