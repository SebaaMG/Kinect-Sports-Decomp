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
extern int fn_82630750();
extern int fn_82631578();
extern int fn_82631920();
extern unsigned int lbl_831C1CEC;
extern unsigned int lbl_8327F900;
extern unsigned int lbl_8327F944;


void fn_825CB978(int param_1,int param_2)

{
  *(uint *)(param_2 + 0x2948) = *(uint *)(param_2 + 0x2948) & 0xfffffff8;
  *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) | 0x40;
  fn_82630750(param_2,0,*(undefined4 *)(param_1 + 0xa0),0);
  *(undefined4 *)(param_2 + 0x2ed8) = lbl_831C1CEC;
  *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) | 0x80000;
  fn_82631920(param_2,lbl_8327F900);
                    /* WARNING: Subroutine does not return */
  fn_82631578(param_2,lbl_8327F944);
}

