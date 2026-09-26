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
extern unsigned int *auStack_34;
extern unsigned int *auStack_40;
extern int fn_82C10B28();
extern int fn_82C10F68();
extern int fn_82C10FD0();
extern int fn_82C11038();
extern unsigned int iStack_38;
extern unsigned int iStack_3c;


void fn_82C11AE0(undefined4 *param_1)

{
  int iVar1;
  undefined1 auStack_40 [4];
  int iStack_3c;
  int iStack_38;
  undefined4 auStack_34 [13];
  
  iStack_38 = 0;
  auStack_34[0] = 0;
  iStack_3c = 0;
  auStack_40[0] = 0;
  iVar1 = (**(code **)(param_1[1] + 0x10))(param_1[1]);
  if ((-1 < iVar1) && (iVar1 = (**(code **)(param_1[6] + 0x28))(param_1[6]), -1 < iVar1)) {
    iVar1 = fn_82C10F68(param_1[0x12],auStack_34,&iStack_3c,auStack_40);
    if (iVar1 != -0x7fafffea) {
      if (iVar1 < 0) {
        return;
      }
      do {
        if (iVar1 < 0) {
          return;
        }
        iStack_38 = *(int *)(iStack_3c + 0x18);
        while (iStack_38 != 0) {
          if (*(int *)(iStack_38 + 0x3c) != 0) {
            *(undefined4 *)(*(int *)(iStack_38 + 0x3c) + 0x38) = 0;
          }
          *(undefined4 *)(iStack_3c + 0x18) = *(undefined4 *)(iStack_38 + 0x3c);
          if (*(int *)(iStack_38 + 0x2c) != 0) {
            iVar1 = fn_82C10B28(*param_1,0x20,*(int *)(iStack_38 + 0x2c));
            if (iVar1 < 0) {
              return;
            }
            iVar1 = fn_82C10B28(*param_1,0x20,iStack_38 + 0x2c);
            if (iVar1 < 0) {
              return;
            }
          }
          iVar1 = fn_82C10B28(*param_1,0x20,&iStack_38);
          if (iVar1 < 0) {
            return;
          }
          *(int *)(iStack_3c + 0x14) = *(int *)(iStack_3c + 0x14) + -1;
          iStack_38 = *(int *)(iStack_3c + 0x18);
        }
        *(undefined4 *)(iStack_3c + 0x14) = 0;
        *(undefined4 *)(iStack_3c + 0x20) = 0;
        *(undefined4 *)(iStack_3c + 0x20) = 0;
        *(undefined4 *)(iStack_3c + 0x24) = 1;
        *(undefined4 *)(iStack_3c + 0x1c) = 0;
        *(undefined4 *)(iStack_3c + 0x18) = 0;
        iVar1 = fn_82C10FD0(param_1[0x12],auStack_34[0],&iStack_3c,auStack_40);
      } while (iVar1 != -0x7fafffea);
    }
    fn_82C11038(param_1[0x12],auStack_34[0]);
    *(undefined8 *)(param_1 + 8) = 0;
    param_1[0xc] = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}

