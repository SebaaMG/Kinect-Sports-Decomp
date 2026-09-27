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
extern int fn_82FF0250();
extern float lbl_82005CCC;
extern unsigned int lbl_8216C698;
extern unsigned int lbl_8216CBEC;
extern unsigned int uStack_19;


void fn_82FF0330(double param_1,int param_2,int param_3,undefined8 param_4,char param_5)

{
  undefined1 uStack_19;
  
  if (param_3 < 0x4000001) {
    if (param_3 != 0x4000000) {
      if ((param_3 == 0x1000000) || (param_3 == 0x2000000)) {
        if ((param_5 != '\0') && (*(undefined4 *)(param_2 + 0x4c) = 0, param_3 == 0x2000000)) {
          (*(code *)**(undefined4 **)(param_2 + -8))(param_2 + -8,0,1);
        }
        uStack_19 = (undefined1)
                    (longlong)
                    ((float)(param_1 - (double)lbl_8216C698) * lbl_82005CCC * lbl_8216CBEC);
        *(undefined1 *)(param_2 + 0xca) = uStack_19;
      }
      goto LAB_82ff0458;
    }
  }
  else if (param_3 != 0x8000000) goto LAB_82ff0458;
  if ((param_5 != '\0') && (*(undefined4 *)(param_2 + 0x50) = 0, param_3 == 0x4000000)) {
    (**(code **)(*(int *)(param_2 + -0xc) + 0x10))(param_2 + -0xc,1);
  }
  uStack_19 = (undefined1)
              (longlong)((float)(param_1 - (double)lbl_8216C698) * lbl_82005CCC * lbl_8216CBEC);
  *(undefined1 *)(param_2 + 0xcb) = uStack_19;
LAB_82ff0458:
  fn_82FF0250(param_2 + -0xc);
  return;
}

