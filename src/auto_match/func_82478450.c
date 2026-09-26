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
extern int fn_824779E0();
extern int fn_82478560();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D3BA4;


void fn_82478450(double param_1,int param_2)

{
  float *pfVar1;
  uint uVar2;
  
  if ((*(int *)(param_2 + 0x180) != 0) && (*(char *)(param_2 + 300) != '\0')) {
    *(float *)(param_2 + 0x130) = (float)((double)*(float *)(param_2 + 0x130) + param_1);
    if (*(uint *)(param_2 + 0x134) < *(uint *)(param_2 + 0x184)) {
      do {
        pfVar1 = (float *)(*(int *)(param_2 + 0x134) * 0x10 + *(int *)(param_2 + 0x180));
        if (*(float *)(param_2 + 0x130) <= *pfVar1) break;
        if (*(char *)(pfVar1 + 1) == '\0') {
          fn_82478560((double)pfVar1[2],param_2);
        }
        else if (lbl_831D3BA4 != 0) {
          fn_824779E0(param_2,0);
        }
        uVar2 = *(int *)(param_2 + 0x134) + 1;
        *(uint *)(param_2 + 0x134) = uVar2;
      } while (uVar2 < *(uint *)(param_2 + 0x184));
    }
    if (*(int *)(param_2 + 0x134) == *(int *)(param_2 + 0x184)) {
      *(undefined1 *)(param_2 + 300) = 0;
      *(undefined4 *)(param_2 + 0x134) = 0;
      *(undefined4 *)(param_2 + 0x130) = lbl_821CC160;
    }
  }
  return;
}

