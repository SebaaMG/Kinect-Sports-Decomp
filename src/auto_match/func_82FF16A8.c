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
extern int fn_82FA5190();
extern int fn_82FEFA98();
extern int fn_82FEFB40();
extern int fn_82FF25A8();
extern int fn_82FF5088();
extern int fn_82FF5750();
extern int fn_82FFBCA8();
extern int fn_83000878();
extern int fn_830085A8();
extern int fn_8301B970();
extern int fn_83027F30();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642F4;
extern unsigned int lbl_832642F8;
extern unsigned int lbl_83264304;


void fn_82FF16A8(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  RtlEnterCriticalSection(0xffffffff83264558);
  if ((*(byte *)(param_1 + 0xda) & 8) == 0) {
    *(byte *)(param_1 + 0xda) = *(byte *)(param_1 + 0xda) | 8;
    (**(code **)(**(int **)(param_1 + 0x68) + 0x78))
              (*(int **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70),3,0);
  }
  fn_82FEFB40(param_1);
  fn_82FEFA98(param_1);
  if (*(int *)(param_1 + 0x17c) != 0) {
    if ((*(uint *)(*(int *)(param_1 + 0x17c) + 0x1c) >> 1 & 1) != 0) {
      puVar3 = (undefined4 *)fn_83000878(*(undefined4 *)(param_1 + 0x68));
      puVar3[1] = 0;
      *puVar3 = 0;
    }
    fn_8301B970(lbl_832642F8,*(undefined4 *)(param_1 + 0x17c),param_1);
    *(undefined4 *)(param_1 + 0x17c) = 0;
    *(undefined4 *)(param_1 + 0x180) = 0;
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    fn_82FF5750(lbl_832642F4,*(int *)(param_1 + 0x58),param_1 + 0xc);
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    fn_82FF5750(lbl_832642F4,*(int *)(param_1 + 0x5c),param_1 + 0xc);
  }
  if ((*(byte *)(param_1 + 0xd9) & 0x20) != 0) {
    *(byte *)(param_1 + 0xd9) = *(byte *)(param_1 + 0xd9) & 0xdf;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    fn_82FF5088(lbl_83264304,*(int *)(param_1 + 0x50),param_1 + 4);
  }
  puVar3 = *(undefined4 **)(param_1 + 0x70);
  if (puVar3 != (undefined4 *)0x0) {
    uVar1 = puVar3[0x17];
    puVar3[0x17] = (int)((ulonglong)uVar1 - 1);
    uVar2 = lbl_831BC768;
    if ((longlong)((ulonglong)uVar1 - 1) < 1) {
      (**(code **)*puVar3)(puVar3,0);
      fn_82FA5190(uVar2,puVar3);
    }
  }
  uVar2 = lbl_831BC768;
  puVar3 = *(undefined4 **)(param_1 + 0x38);
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(puVar3,0);
    fn_82FA5190(uVar2,puVar3);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x1c);
    fn_82FA5190(lbl_831BC768);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  fn_82FF25A8((ulonglong)*(uint *)(param_1 + 0x68) + 0x7c,param_1);
  if (*(int *)(param_1 + 0x138) != 0) {
    fn_830085A8(*(undefined4 *)(param_1 + 0x6c));
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    fn_82FFBCA8(*(int *)(param_1 + 0x18),0);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  (**(code **)(**(int **)(param_1 + 0x68) + 8))();
  if (*(int *)(param_1 + 0x178) != 0) {
    fn_83027F30();
    *(undefined4 *)(param_1 + 0x178) = 0;
  }
  RtlLeaveCriticalSection(0xffffffff83264558);
  return;
}

