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
extern unsigned int *auStack_1f0;
extern int fn_825200F0();
extern int fn_82522D98();
extern int fn_828EA610();
extern unsigned int lbl_83265988;
extern unsigned int lbl_832659CD;


undefined8 fn_8251FE10(int *param_1)

{
  char cVar1;
  int in_r7;
  undefined1 auStack_1f0 [496];
  
  if (*param_1 != 0) {
    fn_825200F0(auStack_1f0,param_1);
    if (lbl_832659CD != '\0') {
      if (in_r7 == 0) {
        in_r7 = lbl_83265988;
      }
      if (((*(char *)(in_r7 + 0xd8) == '\0') && (cVar1 = fn_828EA610(in_r7), cVar1 == '\0')) &&
         (*(int *)(in_r7 + 0x120) != -1)) {
                    /* WARNING: Subroutine does not return */
        fn_82522D98(0x148);
      }
    }
  }
  return 0;
}

