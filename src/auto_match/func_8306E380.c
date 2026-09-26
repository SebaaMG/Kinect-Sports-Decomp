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
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern int fn_8306D450();
extern int fn_8306E0E0();
extern int fn_830783E0();
extern int fn_830784F8();
extern int fn_83078510();
extern int fn_83078528();
extern int fn_830791B8();
extern int fn_83079A68();
extern unsigned int lbl_8201DD74;
extern unsigned int lbl_82022E60;
extern unsigned int lbl_821660DC;
extern unsigned int lbl_82186D54;
extern unsigned int lbl_82186D58;
extern unsigned int lbl_82186D5C;
extern unsigned int lbl_82186D60;
extern unsigned int lbl_82186D64;
extern unsigned int lbl_82186D68;
extern unsigned int lbl_82186D6C;
extern unsigned int lbl_82186D70;
extern unsigned int lbl_82186D74;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8306E380(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  puVar1 = (undefined4 *)fn_82F6A540();
  *puVar1 = (int)param_2;
  puVar2 = puVar1 + 4;
  fn_830791B8(puVar2,param_3,(param_4 & 0xff) == 2);
  fn_8306D450(puVar1 + 0x1c44,param_2);
  fn_830783E0(puVar1 + 0x534c,*puVar1,puVar2);
  fn_83079A68(puVar1 + 0x5374,*puVar1,puVar2);
  fn_8306E0E0(puVar1);
  dVar8 = (double)lbl_8201DD74;
  dVar7 = (double)lbl_82022E60;
  *(undefined1 *)(puVar1[0x1c28] + 0x168) = 1;
  *(undefined1 *)(puVar1[0x1c2e] + 0x168) = 1;
  *(undefined1 *)(puVar1[0x1c2f] + 0x168) = 1;
  *(undefined1 *)(puVar1[0x1c30] + 0x168) = 1;
  *(undefined1 *)(puVar1[0x1c31] + 0x168) = 1;
  *(undefined1 *)(puVar1[0x1c32] + 0x168) = 1;
  *(undefined1 *)(puVar1[0x1c33] + 0x168) = 1;
  *(undefined1 *)(puVar1[0x1c34] + 0x168) = 1;
  fn_830784F8(dVar7,dVar8,puVar1[0x1c30]);
  dVar6 = (double)lbl_821660DC;
  dVar5 = (double)lbl_82186D74;
  fn_83078510(dVar5,dVar6,puVar1[0x1c30]);
  dVar4 = (double)lbl_82186D70;
  dVar3 = (double)lbl_82186D6C;
  fn_83078528(dVar3,dVar4,puVar1[0x1c30]);
  *(undefined1 *)(puVar1[0x1c36] + 0x168) = 1;
  *(undefined1 *)(puVar1[0x1c37] + 0x168) = 1;
  *(undefined1 *)(puVar1[0x1c38] + 0x168) = 1;
  *(undefined1 *)(puVar1[0x1c39] + 0x168) = 1;
  *(undefined1 *)(puVar1[0x1c3a] + 0x168) = 1;
  *(undefined1 *)(puVar1[0x1c3b] + 0x168) = 1;
  *(undefined1 *)(puVar1[0x1c3c] + 0x168) = 1;
  fn_830784F8(dVar7,dVar8,puVar1[0x1c38]);
  fn_83078510(dVar5,dVar6,puVar1[0x1c38]);
  fn_83078528(dVar3,dVar4,puVar1[0x1c38]);
  dVar8 = (double)lbl_82186D68;
  dVar7 = (double)lbl_82186D64;
  *(undefined1 *)(puVar1[0x1c29] + 0x168) = 1;
  *(undefined1 *)(puVar1[0x1c2a] + 0x168) = 1;
  *(undefined1 *)(puVar1[0x1c2b] + 0x168) = 1;
  *(undefined1 *)(puVar1[0x1c2c] + 0x168) = 1;
  *(undefined1 *)(puVar1[0x1c2d] + 0x168) = 1;
  *(undefined1 *)(puVar1[0x1c35] + 0x168) = 1;
  fn_830784F8(dVar7,dVar8,puVar1[0x1c2b]);
  dVar6 = (double)lbl_82186D60;
  dVar5 = (double)lbl_82186D5C;
  fn_83078510(dVar5,dVar6,puVar1[0x1c2b]);
  dVar4 = (double)lbl_82186D58;
  dVar3 = (double)lbl_82186D54;
  fn_83078528(dVar3,dVar4,puVar1[0x1c2b]);
  fn_830784F8(dVar7,dVar8,puVar1[0x1c2c]);
  fn_83078510(dVar5,dVar6,puVar1[0x1c2c]);
  fn_83078528(dVar3,dVar4,puVar1[0x1c2c]);
  *(undefined1 *)(puVar1[0x1c3d] + 0x168) = 1;
  *(undefined1 *)(puVar1[0x1c3e] + 0x168) = 1;
  *(undefined1 *)(puVar1[0x1c3f] + 0x168) = 1;
  *(undefined1 *)(puVar1[0x1c40] + 0x168) = 1;
  fn_82F6A58C(puVar1);
  return;
}

