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
extern int fn_823A03F0();
extern int fn_82536070();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821917B4;
extern unsigned int lbl_82193B00;


void fn_8239D8B0(int param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  double dVar4;
  
  bVar2 = *(int *)(param_1 + 0x178) == 1;
  dVar4 = (double)fn_823A03F0(*(undefined4 *)(param_1 + 0x2dc),param_2,bVar2);
  if (bVar2) {
    if (dVar4 <= (double)lbl_82193B00) {
      if (dVar4 <= (double)lbl_8218E8E8) {
        iVar1 = *(int *)(param_1 + 0xa0);
        if (dVar4 <= (double)lbl_821917B4) {
          if ((iVar1 != 0) && (*(int *)(iVar1 + 0x40) == 1)) {
            return;
          }
          if (*(int *)(param_1 + 0xbd4) == 0) {
            return;
          }
          uVar3 = 0xffffffff821b34ac;
        }
        else {
          if ((iVar1 != 0) && (*(int *)(iVar1 + 0x40) == 1)) {
            return;
          }
          if (*(int *)(param_1 + 0xbd4) == 0) {
            return;
          }
          uVar3 = 0xffffffff821b34c4;
        }
      }
      else {
        if ((*(int *)(param_1 + 0xa0) != 0) && (*(int *)(*(int *)(param_1 + 0xa0) + 0x40) == 1)) {
          return;
        }
        if (*(int *)(param_1 + 0xbd4) == 0) {
          return;
        }
        uVar3 = 0xffffffff821b34cc;
      }
    }
    else {
      if ((*(int *)(param_1 + 0xa0) != 0) && (*(int *)(*(int *)(param_1 + 0xa0) + 0x40) == 1)) {
        return;
      }
      if (*(int *)(param_1 + 0xbd4) == 0) {
        return;
      }
      uVar3 = 0xffffffff821b34d4;
    }
    fn_82536070(0xffffffff821b34b4,uVar3);
  }
  return;
}

