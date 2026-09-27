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
extern float lbl_82005CCC;
extern unsigned int lbl_8216C698;
extern unsigned int lbl_8216CBEC;
extern unsigned int uStack_39;


void fn_82FA87C8(double param_1,int param_2,int param_3,undefined8 param_4,char param_5)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  undefined1 uStack_39;
  
  bVar2 = false;
  if (param_3 < 0x4000001) {
    if (param_3 != 0x4000000) {
      if (param_3 != 0x1000000) {
        if (param_3 != 0x2000000) {
          return;
        }
        bVar2 = true;
      }
      piVar3 = (int *)(param_2 + -0x14);
      pcVar1 = *(code **)(*(int *)(param_2 + -0x14) + 0x10);
      uStack_39 = (undefined1)
                  (longlong)((float)(param_1 - (double)lbl_8216C698) * lbl_82005CCC * lbl_8216CBEC);
      *(undefined1 *)(param_2 + 0x1a) = uStack_39;
      (*pcVar1)(piVar3,param_2 + 0x1a);
      if (param_5 == '\0') {
        return;
      }
      *(undefined4 *)(param_2 + 4) = 0;
      if (!bVar2) {
        return;
      }
      (**(code **)(*piVar3 + 4))(piVar3,0xffffffffffffffff);
      return;
    }
    bVar2 = true;
  }
  else if (param_3 != 0x8000000) {
    return;
  }
  piVar3 = (int *)(param_2 + -0x14);
  pcVar1 = *(code **)(*(int *)(param_2 + -0x14) + 0x10);
  uStack_39 = (undefined1)
              (longlong)((float)(param_1 - (double)lbl_8216C698) * lbl_82005CCC * lbl_8216CBEC);
  *(undefined1 *)(param_2 + 0x1b) = uStack_39;
  (*pcVar1)(piVar3,param_2 + 0x1b);
  if ((param_5 != '\0') && (*(undefined4 *)(param_2 + 8) = 0, bVar2)) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  return;
}

