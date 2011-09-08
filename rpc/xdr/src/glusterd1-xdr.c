/*
  Copyright (c) 2007-2011 Gluster, Inc. <http://www.gluster.com>
  This file is part of GlusterFS.

  GlusterFS is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published
  by the Free Software Foundation; either version 3 of the License,
  or (at your option) any later version.

  GlusterFS is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see
  <http://www.gnu.org/licenses/>.
*/

#include "xdr-common.h"
#include "compat.h"

#if defined(__GNUC__)
#if __GNUC__ >= 4
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#endif

/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "glusterd1-xdr.h"

bool_t
xdr_glusterd_volume_status (XDR *xdrs, glusterd_volume_status *objp)
{
	register int32_t *buf;
        buf = NULL;

	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gd1_mgmt_probe_req (XDR *xdrs, gd1_mgmt_probe_req *objp)
{
	register int32_t *buf;
        buf = NULL;

	 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
		sizeof (u_char), (xdrproc_t) xdr_u_char))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->hostname, ~0))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->port))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gd1_mgmt_probe_rsp (XDR *xdrs, gd1_mgmt_probe_rsp *objp)
{
	register int32_t *buf;
        buf = NULL;

	 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
		sizeof (u_char), (xdrproc_t) xdr_u_char))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->hostname, ~0))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->port))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op_ret))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op_errno))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gd1_mgmt_friend_req (XDR *xdrs, gd1_mgmt_friend_req *objp)
{
	register int32_t *buf;
        buf = NULL;

	 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
		sizeof (u_char), (xdrproc_t) xdr_u_char))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->hostname, ~0))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->port))
		 return FALSE;
	 if (!xdr_bytes (xdrs, (char **)&objp->vols.vols_val, (u_int *) &objp->vols.vols_len, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gd1_mgmt_friend_rsp (XDR *xdrs, gd1_mgmt_friend_rsp *objp)
{
	register int32_t *buf;
        buf = NULL;

	 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
		sizeof (u_char), (xdrproc_t) xdr_u_char))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->hostname, ~0))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op_ret))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op_errno))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->port))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gd1_mgmt_unfriend_req (XDR *xdrs, gd1_mgmt_unfriend_req *objp)
{
	register int32_t *buf;
        buf = NULL;

	 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
		sizeof (u_char), (xdrproc_t) xdr_u_char))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->hostname, ~0))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->port))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gd1_mgmt_unfriend_rsp (XDR *xdrs, gd1_mgmt_unfriend_rsp *objp)
{
	register int32_t *buf;
        buf = NULL;

	 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
		sizeof (u_char), (xdrproc_t) xdr_u_char))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->hostname, ~0))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op_ret))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op_errno))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->port))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gd1_mgmt_cluster_lock_req (XDR *xdrs, gd1_mgmt_cluster_lock_req *objp)
{
	register int32_t *buf;
        buf = NULL;

	 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
		sizeof (u_char), (xdrproc_t) xdr_u_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gd1_mgmt_cluster_lock_rsp (XDR *xdrs, gd1_mgmt_cluster_lock_rsp *objp)
{
	register int32_t *buf;
        buf = NULL;

	 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
		sizeof (u_char), (xdrproc_t) xdr_u_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op_ret))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op_errno))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gd1_mgmt_cluster_unlock_req (XDR *xdrs, gd1_mgmt_cluster_unlock_req *objp)
{
	register int32_t *buf;
        buf = NULL;

	 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
		sizeof (u_char), (xdrproc_t) xdr_u_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gd1_mgmt_cluster_unlock_rsp (XDR *xdrs, gd1_mgmt_cluster_unlock_rsp *objp)
{
	register int32_t *buf;
        buf = NULL;

	 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
		sizeof (u_char), (xdrproc_t) xdr_u_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op_ret))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op_errno))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gd1_mgmt_stage_op_req (XDR *xdrs, gd1_mgmt_stage_op_req *objp)
{
	register int32_t *buf;
        buf = NULL;

	 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
		sizeof (u_char), (xdrproc_t) xdr_u_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op))
		 return FALSE;
	 if (!xdr_bytes (xdrs, (char **)&objp->buf.buf_val, (u_int *) &objp->buf.buf_len, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gd1_mgmt_stage_op_rsp (XDR *xdrs, gd1_mgmt_stage_op_rsp *objp)
{
	register int32_t *buf;
        buf = NULL;


	if (xdrs->x_op == XDR_ENCODE) {
		 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
			sizeof (u_char), (xdrproc_t) xdr_u_char))
			 return FALSE;
		buf = XDR_INLINE (xdrs, 3 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_int (xdrs, &objp->op))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->op_ret))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->op_errno))
				 return FALSE;

		} else {
		IXDR_PUT_LONG(buf, objp->op);
		IXDR_PUT_LONG(buf, objp->op_ret);
		IXDR_PUT_LONG(buf, objp->op_errno);
		}
		 if (!xdr_string (xdrs, &objp->op_errstr, ~0))
			 return FALSE;
		 if (!xdr_bytes (xdrs, (char **)&objp->dict.dict_val, (u_int *) &objp->dict.dict_len, ~0))
			 return FALSE;
		return TRUE;
	} else if (xdrs->x_op == XDR_DECODE) {
		 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
			sizeof (u_char), (xdrproc_t) xdr_u_char))
			 return FALSE;
		buf = XDR_INLINE (xdrs, 3 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_int (xdrs, &objp->op))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->op_ret))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->op_errno))
				 return FALSE;

		} else {
		objp->op = IXDR_GET_LONG(buf);
		objp->op_ret = IXDR_GET_LONG(buf);
		objp->op_errno = IXDR_GET_LONG(buf);
		}
		 if (!xdr_string (xdrs, &objp->op_errstr, ~0))
			 return FALSE;
		 if (!xdr_bytes (xdrs, (char **)&objp->dict.dict_val, (u_int *) &objp->dict.dict_len, ~0))
			 return FALSE;
	 return TRUE;
	}

	 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
		sizeof (u_char), (xdrproc_t) xdr_u_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op_ret))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op_errno))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->op_errstr, ~0))
		 return FALSE;
	 if (!xdr_bytes (xdrs, (char **)&objp->dict.dict_val, (u_int *) &objp->dict.dict_len, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gd1_mgmt_commit_op_req (XDR *xdrs, gd1_mgmt_commit_op_req *objp)
{
	register int32_t *buf;
        buf = NULL;

	 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
		sizeof (u_char), (xdrproc_t) xdr_u_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op))
		 return FALSE;
	 if (!xdr_bytes (xdrs, (char **)&objp->buf.buf_val, (u_int *) &objp->buf.buf_len, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gd1_mgmt_commit_op_rsp (XDR *xdrs, gd1_mgmt_commit_op_rsp *objp)
{
	register int32_t *buf;
        buf = NULL;


	if (xdrs->x_op == XDR_ENCODE) {
		 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
			sizeof (u_char), (xdrproc_t) xdr_u_char))
			 return FALSE;
		buf = XDR_INLINE (xdrs, 3 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_int (xdrs, &objp->op))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->op_ret))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->op_errno))
				 return FALSE;

		} else {
		IXDR_PUT_LONG(buf, objp->op);
		IXDR_PUT_LONG(buf, objp->op_ret);
		IXDR_PUT_LONG(buf, objp->op_errno);
		}
		 if (!xdr_bytes (xdrs, (char **)&objp->dict.dict_val, (u_int *) &objp->dict.dict_len, ~0))
			 return FALSE;
		 if (!xdr_string (xdrs, &objp->op_errstr, ~0))
			 return FALSE;
		return TRUE;
	} else if (xdrs->x_op == XDR_DECODE) {
		 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
			sizeof (u_char), (xdrproc_t) xdr_u_char))
			 return FALSE;
		buf = XDR_INLINE (xdrs, 3 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_int (xdrs, &objp->op))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->op_ret))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->op_errno))
				 return FALSE;

		} else {
		objp->op = IXDR_GET_LONG(buf);
		objp->op_ret = IXDR_GET_LONG(buf);
		objp->op_errno = IXDR_GET_LONG(buf);
		}
		 if (!xdr_bytes (xdrs, (char **)&objp->dict.dict_val, (u_int *) &objp->dict.dict_len, ~0))
			 return FALSE;
		 if (!xdr_string (xdrs, &objp->op_errstr, ~0))
			 return FALSE;
	 return TRUE;
	}

	 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
		sizeof (u_char), (xdrproc_t) xdr_u_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op_ret))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op_errno))
		 return FALSE;
	 if (!xdr_bytes (xdrs, (char **)&objp->dict.dict_val, (u_int *) &objp->dict.dict_len, ~0))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->op_errstr, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gd1_mgmt_friend_update (XDR *xdrs, gd1_mgmt_friend_update *objp)
{
	register int32_t *buf;
        buf = NULL;

	 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
		sizeof (u_char), (xdrproc_t) xdr_u_char))
		 return FALSE;
	 if (!xdr_bytes (xdrs, (char **)&objp->friends.friends_val, (u_int *) &objp->friends.friends_len, ~0))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->port))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gd1_mgmt_friend_update_rsp (XDR *xdrs, gd1_mgmt_friend_update_rsp *objp)
{
	register int32_t *buf;
        buf = NULL;

	 if (!xdr_vector (xdrs, (char *)objp->uuid, 16,
		sizeof (u_char), (xdrproc_t) xdr_u_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op_ret))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op_errno))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gd1_mgmt_brick_op_req (XDR *xdrs, gd1_mgmt_brick_op_req *objp)
{
	register int32_t *buf;
        buf = NULL;

	 if (!xdr_string (xdrs, &objp->name, ~0))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op))
		 return FALSE;
	 if (!xdr_bytes (xdrs, (char **)&objp->input.input_val, (u_int *) &objp->input.input_len, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gd1_mgmt_brick_op_rsp (XDR *xdrs, gd1_mgmt_brick_op_rsp *objp)
{
	register int32_t *buf;
        buf = NULL;

	 if (!xdr_int (xdrs, &objp->op_ret))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op_errno))
		 return FALSE;
	 if (!xdr_bytes (xdrs, (char **)&objp->output.output_val, (u_int *) &objp->output.output_len, ~0))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->op_errstr, ~0))
		 return FALSE;
	return TRUE;
}
