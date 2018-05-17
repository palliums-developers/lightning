#include "../routing.c"
#include "../gossip_store.c"
#include <stdio.h>

struct broadcast_state *new_broadcast_state(tal_t *ctx UNNEEDED)
{
	return NULL;
}

void status_fmt(enum log_level level UNUSED, const char *fmt, ...)
{
	va_list ap;

	va_start(ap, fmt);
	vprintf(fmt, ap);
	printf("\n");
	va_end(ap);
}

/* AUTOGENERATED MOCKS START */
/* Generated stub for fromwire_channel_announcement */
bool fromwire_channel_announcement(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, secp256k1_ecdsa_signature *node_signature_1 UNNEEDED, secp256k1_ecdsa_signature *node_signature_2 UNNEEDED, secp256k1_ecdsa_signature *bitcoin_signature_1 UNNEEDED, secp256k1_ecdsa_signature *bitcoin_signature_2 UNNEEDED, u8 **features UNNEEDED, struct bitcoin_blkid *chain_hash UNNEEDED, struct short_channel_id *short_channel_id UNNEEDED, struct pubkey *node_id_1 UNNEEDED, struct pubkey *node_id_2 UNNEEDED, struct pubkey *bitcoin_key_1 UNNEEDED, struct pubkey *bitcoin_key_2 UNNEEDED)
{ fprintf(stderr, "fromwire_channel_announcement called!\n"); abort(); }
/* Generated stub for fromwire_channel_update */
bool fromwire_channel_update(const void *p UNNEEDED, secp256k1_ecdsa_signature *signature UNNEEDED, struct bitcoin_blkid *chain_hash UNNEEDED, struct short_channel_id *short_channel_id UNNEEDED, u32 *timestamp UNNEEDED, u16 *flags UNNEEDED, u16 *cltv_expiry_delta UNNEEDED, u64 *htlc_minimum_msat UNNEEDED, u32 *fee_base_msat UNNEEDED, u32 *fee_proportional_millionths UNNEEDED)
{ fprintf(stderr, "fromwire_channel_update called!\n"); abort(); }
/* Generated stub for fromwire_gossip_local_add_channel */
bool fromwire_gossip_local_add_channel(const void *p UNNEEDED, struct short_channel_id *short_channel_id UNNEEDED, struct pubkey *remote_node_id UNNEEDED)
{ fprintf(stderr, "fromwire_gossip_local_add_channel called!\n"); abort(); }
/* Generated stub for fromwire_gossip_store_channel_announcement */
bool fromwire_gossip_store_channel_announcement(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, u8 **announcement UNNEEDED, u64 *satoshis UNNEEDED)
{ fprintf(stderr, "fromwire_gossip_store_channel_announcement called!\n"); abort(); }
/* Generated stub for fromwire_gossip_store_channel_delete */
bool fromwire_gossip_store_channel_delete(const void *p UNNEEDED, struct short_channel_id *short_channel_id UNNEEDED)
{ fprintf(stderr, "fromwire_gossip_store_channel_delete called!\n"); abort(); }
/* Generated stub for fromwire_gossip_store_channel_update */
bool fromwire_gossip_store_channel_update(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, u8 **update UNNEEDED)
{ fprintf(stderr, "fromwire_gossip_store_channel_update called!\n"); abort(); }
/* Generated stub for fromwire_gossip_store_local_add_channel */
bool fromwire_gossip_store_local_add_channel(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, u8 **local_add UNNEEDED)
{ fprintf(stderr, "fromwire_gossip_store_local_add_channel called!\n"); abort(); }
/* Generated stub for fromwire_gossip_store_node_announcement */
bool fromwire_gossip_store_node_announcement(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, u8 **announcement UNNEEDED)
{ fprintf(stderr, "fromwire_gossip_store_node_announcement called!\n"); abort(); }
/* Generated stub for fromwire_node_announcement */
bool fromwire_node_announcement(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, secp256k1_ecdsa_signature *signature UNNEEDED, u8 **features UNNEEDED, u32 *timestamp UNNEEDED, struct pubkey *node_id UNNEEDED, u8 rgb_color[3] UNNEEDED, u8 alias[32] UNNEEDED, u8 **addresses UNNEEDED)
{ fprintf(stderr, "fromwire_node_announcement called!\n"); abort(); }
/* Generated stub for fromwire_u8 */
u8 fromwire_u8(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_u8 called!\n"); abort(); }
/* Generated stub for fromwire_wireaddr */
bool fromwire_wireaddr(const u8 **cursor UNNEEDED, size_t *max UNNEEDED, struct wireaddr *addr UNNEEDED)
{ fprintf(stderr, "fromwire_wireaddr called!\n"); abort(); }
/* Generated stub for insert_broadcast */
void insert_broadcast(struct broadcast_state *bstate UNNEEDED, const u8 *msg UNNEEDED)
{ fprintf(stderr, "insert_broadcast called!\n"); abort(); }
/* Generated stub for onion_type_name */
const char *onion_type_name(int e UNNEEDED)
{ fprintf(stderr, "onion_type_name called!\n"); abort(); }
/* Generated stub for sanitize_error */
char *sanitize_error(const tal_t *ctx UNNEEDED, const u8 *errmsg UNNEEDED,
		     struct channel_id *channel_id UNNEEDED)
{ fprintf(stderr, "sanitize_error called!\n"); abort(); }
/* Generated stub for status_failed */
void status_failed(enum status_failreason code UNNEEDED,
		   const char *fmt UNNEEDED, ...)
{ fprintf(stderr, "status_failed called!\n"); abort(); }
/* Generated stub for towire_errorfmt */
u8 *towire_errorfmt(const tal_t *ctx UNNEEDED,
		    const struct channel_id *channel UNNEEDED,
		    const char *fmt UNNEEDED, ...)
{ fprintf(stderr, "towire_errorfmt called!\n"); abort(); }
/* Generated stub for towire_gossip_store_channel_announcement */
u8 *towire_gossip_store_channel_announcement(const tal_t *ctx UNNEEDED, const u8 *announcement UNNEEDED, u64 satoshis UNNEEDED)
{ fprintf(stderr, "towire_gossip_store_channel_announcement called!\n"); abort(); }
/* Generated stub for towire_gossip_store_channel_delete */
u8 *towire_gossip_store_channel_delete(const tal_t *ctx UNNEEDED, const struct short_channel_id *short_channel_id UNNEEDED)
{ fprintf(stderr, "towire_gossip_store_channel_delete called!\n"); abort(); }
/* Generated stub for towire_gossip_store_channel_update */
u8 *towire_gossip_store_channel_update(const tal_t *ctx UNNEEDED, const u8 *update UNNEEDED)
{ fprintf(stderr, "towire_gossip_store_channel_update called!\n"); abort(); }
/* Generated stub for towire_gossip_store_local_add_channel */
u8 *towire_gossip_store_local_add_channel(const tal_t *ctx UNNEEDED, const u8 *local_add UNNEEDED)
{ fprintf(stderr, "towire_gossip_store_local_add_channel called!\n"); abort(); }
/* Generated stub for towire_gossip_store_node_announcement */
u8 *towire_gossip_store_node_announcement(const tal_t *ctx UNNEEDED, const u8 *announcement UNNEEDED)
{ fprintf(stderr, "towire_gossip_store_node_announcement called!\n"); abort(); }
/* AUTOGENERATED MOCKS END */

/* Updates existing route if required. */
static struct half_chan *add_connection(struct routing_state *rstate,
					      const struct pubkey *from,
					      const struct pubkey *to,
					      u32 base_fee, s32 proportional_fee,
					      u32 delay)
{
	struct short_channel_id scid;
	struct half_chan *c;
	struct chan *chan;

	/* Make a unique scid. */
	memcpy(&scid, from, sizeof(scid) / 2);
	memcpy((char *)&scid + sizeof(scid) / 2, to, sizeof(scid) / 2);

	chan = get_channel(rstate, &scid);
	if (!chan)
		chan = new_chan(rstate, &scid, from, to);

	c = &chan->half[pubkey_idx(from, to)];
	/* Make sure it's seen as initialized (update non-NULL). */
	c->channel_update = (void *)c;
	c->base_fee = base_fee;
	c->proportional_fee = proportional_fee;
	c->delay = delay;
	c->flags = get_channel_direction(from, to);
	return c;
}

/* Returns chan connecting from and to: *idx set to refer
 * to connection with src=from, dst=to */
static struct chan *find_channel(struct routing_state *rstate UNUSED,
					    const struct node *from,
					    const struct node *to,
					    int *idx)
{
	int i, n;

	*idx = pubkey_idx(&from->id, &to->id);

	n = tal_count(to->chans);
	for (i = 0; i < n; i++) {
		if (to->chans[i]->nodes[*idx] == from)
			return to->chans[i];
	}
	return NULL;
}

static struct half_chan *get_connection(struct routing_state *rstate,
					       const struct pubkey *from_id,
					       const struct pubkey *to_id)
{
	int idx;
	struct node *from, *to;
	struct chan *c;

	from = get_node(rstate, from_id);
	to = get_node(rstate, to_id);
	if (!from || ! to)
		return NULL;

	c = find_channel(rstate, from, to, &idx);
	if (!c)
		return NULL;
	return &c->half[idx];
}

static bool channel_is_between(const struct chan *chan,
			       const struct pubkey *a, const struct pubkey *b)
{
	if (pubkey_eq(&chan->nodes[0]->id, a)
	    && pubkey_eq(&chan->nodes[1]->id, b))
		return true;

	if (pubkey_eq(&chan->nodes[0]->id, b)
	    && pubkey_eq(&chan->nodes[1]->id, a))
		return true;

	return false;
}

int main(void)
{
	setup_locale();

	static const struct bitcoin_blkid zerohash;
	struct routing_state *rstate;
	struct pubkey a, b, c, d;
	struct privkey tmp;
	u64 fee;
	struct chan **route;
	const double riskfactor = 1.0 / BLOCKS_PER_YEAR / 10000;

	secp256k1_ctx = secp256k1_context_create(SECP256K1_CONTEXT_VERIFY
						 | SECP256K1_CONTEXT_SIGN);
	setup_tmpctx();

	memset(&tmp, 'a', sizeof(tmp));
	pubkey_from_privkey(&tmp, &a);
	rstate = new_routing_state(tmpctx, &zerohash, &a, 0, false);

	new_node(rstate, &a);

	memset(&tmp, 'b', sizeof(tmp));
	pubkey_from_privkey(&tmp, &b);
	new_node(rstate, &b);

	/* A<->B */
	add_connection(rstate, &a, &b, 1, 1, 1);

	route = find_route(tmpctx, rstate, &a, &b, 1000, riskfactor, 0.0, NULL, &fee);
	assert(route);
	assert(tal_count(route) == 1);
	assert(fee == 0);

	/* A<->B<->C */
	memset(&tmp, 'c', sizeof(tmp));
	pubkey_from_privkey(&tmp, &c);
	new_node(rstate, &c);

	status_trace("A = %s", type_to_string(tmpctx, struct pubkey, &a));
	status_trace("B = %s", type_to_string(tmpctx, struct pubkey, &b));
	status_trace("C = %s", type_to_string(tmpctx, struct pubkey, &c));
	add_connection(rstate, &b, &c, 1, 1, 1);

	route = find_route(tmpctx, rstate, &a, &c, 1000, riskfactor, 0.0, NULL, &fee);
	assert(route);
	assert(tal_count(route) == 2);
	assert(fee == 1);

	/* A<->D<->C: Lower base, higher percentage. */
	memset(&tmp, 'd', sizeof(tmp));
	pubkey_from_privkey(&tmp, &d);
	new_node(rstate, &d);
	status_trace("D = %s", type_to_string(tmpctx, struct pubkey, &d));

	add_connection(rstate, &a, &d, 0, 2, 1);
	add_connection(rstate, &d, &c, 0, 2, 1);

	/* Will go via D for small amounts. */
	route = find_route(tmpctx, rstate, &a, &c, 1000, riskfactor, 0.0, NULL, &fee);
	assert(route);
	assert(tal_count(route) == 2);
	assert(channel_is_between(route[0], &a, &d));
	assert(channel_is_between(route[1], &d, &c));
	assert(fee == 0);

	/* Will go via B for large amounts. */
	route = find_route(tmpctx, rstate, &a, &c, 3000000, riskfactor, 0.0, NULL, &fee);
	assert(route);
	assert(tal_count(route) == 2);
	assert(channel_is_between(route[0], &a, &b));
	assert(channel_is_between(route[1], &b, &c));
	assert(fee == 1 + 3);

	/* Make B->C inactive, force it back via D */
	get_connection(rstate, &b, &c)->flags |= ROUTING_FLAGS_DISABLED;
	route = find_route(tmpctx, rstate, &a, &c, 3000000, riskfactor, 0.0, NULL, &fee);
	assert(route);
	assert(tal_count(route) == 2);
	assert(channel_is_between(route[0], &a, &d));
	assert(channel_is_between(route[1], &d, &c));
	assert(fee == 0 + 6);

	tal_free(tmpctx);
	secp256k1_context_destroy(secp256k1_ctx);
	return 0;
}
