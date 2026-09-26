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
extern int fn_825077E8();
extern unsigned int lbl_821917B4;
extern unsigned int lbl_82192D74;
extern unsigned int lbl_82193B00;
extern unsigned int lbl_82193D04;


void fn_82457328(double param_1,int param_2)

{
  int iVar1;
  
  if ((*(int *)(param_2 + 0x18) != 0) && (*(int *)(param_2 + 0x1c) == 0)) {
    if ((double)lbl_821917B4 <= param_1) {
      if ((double)lbl_82193D04 <= param_1) {
        if ((double)lbl_82192D74 <= param_1) {
          iVar1 = param_2 + 4;
          if ((double)lbl_82193B00 <= param_1) {
            iVar1 = param_2;
          }
        }
        else {
          iVar1 = param_2 + 8;
        }
      }
      else {
        iVar1 = param_2 + 0xc;
      }
    }
    else {
      iVar1 = param_2 + 0x10;
    }
    fn_825077E8(*(int *)(param_2 + 0x18),iVar1,1);
    *(undefined4 *)(param_2 + 0x1c) = 1;
  }
  return;
}

