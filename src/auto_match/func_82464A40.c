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
extern int fn_826310E0();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82637D70();
extern int fn_82637DE0();
extern int fn_82637E50();
extern int fn_82637EC0();
extern unsigned int lbl_82193CC0;
extern unsigned int lbl_82195634;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8327F8B8;
extern unsigned int lbl_8327F94C;
extern unsigned int uRam831c1d9c;
extern unsigned int uRam8327f950;


void fn_82464A40(int param_1)

{
  int iVar1;
  
  if (((lbl_82195634 <= *(float *)(param_1 + 0x18)) && (*(float *)(param_1 + 0x18) <= lbl_82193CC0))
     && (*(float *)(param_1 + 0x1c) == lbl_821CC160)) {
    return;
  }
  fn_82631920(lbl_8320A898,lbl_8327F8B8);
  iVar1 = lbl_8320A898;
  *(undefined4 *)(lbl_8320A898 + 0x2ed8) = uRam831c1d9c;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x80000;
  fn_82637EC0(lbl_8320A898,1);
  fn_82637D70(lbl_8320A898,0);
  fn_82637DE0(lbl_8320A898);
  fn_82637E50(lbl_8320A898,10);
  fn_826310E0(lbl_8320A898,0,0xffffffff8329ead0,4,0x8000000000000000);
  if (*(int *)(param_1 + 0x28) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82631578(lbl_8320A898,uRam8327f950);
  }
                    /* WARNING: Subroutine does not return */
  fn_82631578(lbl_8320A898,lbl_8327F94C);
}

