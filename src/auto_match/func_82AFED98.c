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
extern int fn_82AC9F80();
extern int fn_82AD12C8();
extern int fn_82AD17B0();
extern int fn_82AD1978();
extern int fn_82AD1B28();
extern int fn_82AF7710();
extern int fn_82AFA378();
extern int fn_82AFE7E0();
extern int fn_82B80EE0();
extern unsigned int lbl_821AAD20;


void fn_82AFED98(undefined8 param_1,int param_2,undefined8 param_3,int param_4,int param_5)

{
  uint *puVar1;
  undefined8 uVar2;
  int iVar3;
  double dVar4;
  
  puVar1 = *(uint **)(param_5 + 0x34);
  if ((*(uint *)(puVar1[3] + 8) & 0x3f80) == 16000) {
    dVar4 = (double)fn_82B80EE0(puVar1[3],*puVar1 >> 5 & 3,*puVar1 & 0x1f);
    iVar3 = param_4;
    if (dVar4 == (double)lbl_821AAD20) goto LAB_82afee6c;
  }
  uVar2 = fn_82AD17B0(param_1,param_4);
  iVar3 = fn_82AF7710(param_1,1,param_4,puVar1,uVar2);
  if ((*puVar1 & 8) != 0) {
    uVar2 = fn_82AD12C8(param_5);
    uVar2 = fn_82AC9F80(param_1,uVar2,0);
    fn_82AD1978(iVar3,uVar2);
  }
  fn_82AD1B28(param_4);
  *(uint *)(param_4 + 8) = *(uint *)(param_4 + 8) | 0x1000000;
  fn_82AFA378(param_1,iVar3);
LAB_82afee6c:
  if ((*(uint *)(param_2 + 8) & 1) != 0) {
    *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) | 1;
  }
  fn_82AFE7E0(param_1,param_2,param_3,iVar3);
  fn_82AFA378(param_1,param_4);
  return;
}

