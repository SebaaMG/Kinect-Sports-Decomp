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
extern int fn_8295A330();
extern int fn_82975B00();


undefined8 fn_829A9AF8(int param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(uint *)(*(int *)(*(int *)(param_2 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4);
  if ((uVar1 & 0x100) == 0) {
    if (((uVar1 & 0x200) == 0) || ((uVar1 & 0x80) == 0)) {
      if ((uVar1 & 0x200) == 0) {
        if ((uVar1 & 0x10) == 0) {
          if ((uVar1 & 0x2020) == 0x2020) {
            uVar2 = 5;
          }
          else if ((uVar1 & 0x40020) == 0x40020) {
            uVar2 = 6;
          }
          else if ((uVar1 & 0x20) == 0) {
            if (((uVar1 & 1) == 0) || ((uVar1 & 2) == 0)) {
              if (((uVar1 & 2) == 0) || ((uVar1 & 4) == 0)) {
                if ((uVar1 & 0x10000) != 0) {
                  fn_82975B00(param_1,*(undefined4 *)
                                             (*(int *)(*(int *)(param_2 + 0x48) * 4 +
                                                      *(int *)(param_1 + 0x18)) + 0x3c),0x1194,
                                    0xffffffff82052028);
                }
                return 0xffffffff80004005;
              }
              uVar2 = 8;
            }
            else {
              uVar2 = 7;
            }
          }
          else {
            uVar2 = 4;
          }
        }
        else {
          uVar2 = 3;
        }
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 9;
    }
  }
  else {
    uVar2 = 1;
  }
  uVar2 = fn_8295A330(param_1,uVar2);
  return uVar2;
}

