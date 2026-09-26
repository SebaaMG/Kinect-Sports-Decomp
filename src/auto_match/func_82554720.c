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
extern int fn_8255F788();
extern int fn_8255FA88();
extern int fn_827F0670();
extern int fn_827F22D0();
extern int fn_827F5708();
extern int fn_827F5730();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_82554720(undefined8 param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  
  uVar4 = 1;
  if (1 < *(uint *)(param_2 + 0x18c)) {
    iVar5 = 4;
    dVar7 = (double)lbl_821CC160;
    dVar6 = (double)lbl_821CA460;
    do {
      bVar1 = *(byte *)(uVar4 + *(int *)(param_2 + 0x19c));
      if ((bVar1 & 2) == 0) {
        if ((bVar1 & 1) != 0) {
          cVar3 = fn_827F22D0(*(undefined4 *)(*(int *)(param_2 + 400) + iVar5));
          if (cVar3 != '\0') {
            fn_8255F788(dVar7,*(undefined4 *)(*(int *)(param_2 + 400) + iVar5));
            if (uVar4 != 0) {
              fn_827F5708(dVar7,*(undefined4 *)(*(int *)(param_2 + 0x198) + iVar5 + -4));
            }
            *(undefined1 *)(uVar4 + *(int *)(param_2 + 0x19c)) = 0;
          }
        }
      }
      else {
        if (*(int *)(*(int *)(*(int *)(param_2 + 400) + iVar5) + 0x114) != 0) {
          iVar2 = fn_8255FA88();
          if (iVar2 == 0) goto LAB_8255482c;
        }
        if (uVar4 != 0) {
          fn_827F5730(dVar7,dVar6,*(undefined4 *)(*(int *)(param_2 + 0x198) + iVar5 + -4));
          fn_8255F788(dVar6,*(undefined4 *)(*(int *)(param_2 + 400) + iVar5));
          *(undefined1 *)(uVar4 + *(int *)(param_2 + 0x19c)) = 1;
        }
      }
LAB_8255482c:
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar4 < *(uint *)(param_2 + 0x18c));
  }
  fn_827F0670(param_1,param_2);
  return;
}

